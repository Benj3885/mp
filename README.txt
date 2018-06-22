::::::::Instructions::::::::


The C++ program runs as a consol application consisting of the following classes and their associated header-files
and the arduino code.

main.cpp
plantlist.cpp
SerialPortcpp
waterPlant.cpp
tempLog.cpp
temphu.ino



The full struture is not done as it is a protype, which means the main class does not have the various option.

This means it runs the SerialPort.cpp as default (the one that reads the temperature 

and humidity from the Arduino serialport - you might want to change). 


Uncomment the waterPlant() or tempLog() object in main

in order to run the other classes in the "menu" (waterPlant class inherits from plantist class).


The temperatures in tempLog class are fictional, and serves the only the purpose of demonstrating the use of STL (arrays).


















 



 