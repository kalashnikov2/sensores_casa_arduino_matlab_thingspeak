a = arduino('COM5', 'Uno', 'Libraries', 'I2C')  
 scanI2CBus(a,0)
dev = i2cdev(a,'0x5C')
%  write(dev,dec2hex([03,00,04]), 'uint8')
rtemp = [3,0,4];
write(dev,rtemp)
pause(0.25);
data = read(dev,5)