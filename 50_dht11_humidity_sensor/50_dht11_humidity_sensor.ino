#include <DHT.h>
#define Type DHT11
int sensePin = 2;
DHT* sensor = new DHT(sensePin, Type);
float humidity;
float tempC;
float tempF;
int pause = 2000;
void setup() {
  Serial.begin(9600);
  sensor->begin();
}

void loop() {
  humidity = sensor->readHumidity();
  tempC = sensor->readTemperature();
  tempF = sensor->readTemperature(true);
  Serial.print("Humidity : ");
  Serial.print(humidity);
  Serial.print(", Temperature : ");
  Serial.print(tempC);
  Serial.print("C ");
  Serial.print(tempF);
  Serial.println("F.");
  delay(pause);
}
