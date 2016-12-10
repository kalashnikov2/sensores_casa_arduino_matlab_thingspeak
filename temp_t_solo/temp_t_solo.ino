#include <Wire.h>
#include <Adafruit_AM2315.h>
#include <SPI.h>
#include <Ethernet.h>
#include <avr/wdt.h>

Adafruit_AM2315 am2315;

byte mac[] = { 0xD4, 0x28, 0xB2, 0xFF, 0xA0, 0xA1 };
char thingSpeakAddress[] = "api.thingspeak.com";
String writeAPIKey = "2SFLMEOVHNNFHJQX";
const int updateThingSpeakInterval = 30 * 1000;      // Time interval in milliseconds to update ThingSpeak (number of seconds * 1000 = interval)

long lastConnectionTime = 0;
boolean lastConnected = false;
int failedCounter = 0;

EthernetClient client;


void setup() {
  Serial.begin(115200);
  Serial.println("AM2315 Test!,to thingspeack ,k");

  if (! am2315.begin()) {
    Serial.println("Sensor not found, check wiring & pullups!");
    while (1);
  }
  startEthernet();
}

void loop() {

  //Serial.print(am2315.readHumidity());Serial.print("|"); Serial.println(am2315.readTemperature());
  //delay(15 * 1000);
  //Serial.print(am2315.readHumidity());Serial.print("|"); Serial.println(am2315.readTemperature());
  //delay(4 *1000);
  // Print Update Response to Serial Monitor
  if (client.available())
  {
    char c = client.read();
    Serial.print(c);
  }

  // Disconnect from ThingSpeak
  if (!client.connected() && lastConnected)
  {
    Serial.println("...disconnected");
    Serial.println();

    client.stop();
  }

  // Update ThingSpeak
  if (!client.connected() && (millis() - lastConnectionTime > updateThingSpeakInterval))
  {
    Serial.print(am2315.readHumidity()); Serial.print("|"); Serial.println(am2315.readTemperature());
    String Temp = String(am2315.readTemperature(), DEC);
    String Humedad = String(am2315.readHumidity(), DEC);
    updateThingSpeak("field1=" + Temp + "&field2=" + Humedad);

  }

  // Check if Arduino Ethernet needs to be restarted
  if (failedCounter > 3 ) {
    startEthernet();
  }

  lastConnected = client.connected();
}

void updateThingSpeak(String tsData)
{
  if (client.connect(thingSpeakAddress, 80))
  {
    client.print("POST /update HTTP/1.1\n");
    client.print("Host: api.thingspeak.com\n");
    client.print("Connection: close\n");
    client.print("X-THINGSPEAKAPIKEY: " + writeAPIKey + "\n");
    client.print("Content-Type: application/x-www-form-urlencoded\n");
    client.print("Content-Length: ");
    client.print(tsData.length());
    client.print("\n\n");

    client.print(tsData);

    lastConnectionTime = millis();

    if (client.connected())
    {
      Serial.println("Connecting to ThingSpeak...");
      Serial.println();

      failedCounter = 0;
    }
    else
    {
      failedCounter++;

      Serial.println("Connection to ThingSpeak failed (" + String(failedCounter, DEC) + ")");
      Serial.println();
    }

  }
  else
  {
    failedCounter++;

    Serial.println("Connection to ThingSpeak Failed (" + String(failedCounter, DEC) + ")");
    Serial.println();

    lastConnectionTime = millis();
  }
}

void startEthernet()
{

  client.stop();

  Serial.println("Connecting Arduino to network...");
  Serial.println();

  delay(1000);

  // Connect to network amd obtain an IP address using DHCP
  if (Ethernet.begin(mac) == 0)
  {
    Serial.println("DHCP Failed, reset Arduino to try again");
    Serial.println();
  }
  else
  {
    Serial.println("Arduino connected to network using DHCP");
    Serial.println();
  }

  delay(1000);
}

