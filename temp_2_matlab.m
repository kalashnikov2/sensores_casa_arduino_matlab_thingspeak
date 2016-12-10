clear all; clc; close all;
% Initialize serial port
s =serial('COM5','BaudRate',9600);
set(s,'DataBits', 8);
set(s,'StopBits', 1);
fopen(s);
t = fscanf(s, '%f|%f')
Temp = t(2)
RH = t(1)
fclose(s); 
 
