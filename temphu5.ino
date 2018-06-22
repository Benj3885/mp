#include <DHT.h>

DHT dht;

void setup()
{
Serial.begin(9600);
dht.setup(2); // data pin 2

}

void loop() {


// prints out the value of the humidity and temperature in the serial monitor
  
delay(dht.getMinimumSamplingPeriod());
Serial.print("Humidity: ");
Serial.print(dht.getHumidity());
Serial.print("\t");
Serial.print(" %, Temp: ");
Serial.print(dht.getTemperature());
Serial.println(" Celcius"); 

delay(1000); //Delay with 1 second
}
