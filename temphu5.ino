#include <DHT.h> // Library for the functions needed to interact with the sensor DHT22 (temperature and humidity)

DHT dht; // DHT object

void setup()
{
  Serial.begin(9600); // baud rate, which is bits per second
  dht.setup(2); // The sensor pin
}

void loop() {
  // prints out the value of the humidity and temperature in the serial monitor
  delay(dht.getMinimumSamplingPeriod()); // 2 seconds
  Serial.print("Humidity: ");
  Serial.print(dht.getHumidity());
  Serial.print("\t");
  Serial.print(" %, Temp: ");
  Serial.print(dht.getTemperature());
  Serial.println(" Celcius"); 

  delay(1000); //Delay with 1 second
}
