/*
* In this example, as the light turns on in the room the buzzer increase the delay it shuts on/off and vice versa.
*/
int buzzerPin = 8;
int readPin = A0;
int readValue;
int us;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(readPin);
  readValue = (readValue > 700) ? 700 : readValue;
  Serial.print("Will pause : ");
  us = (9940./700) * readValue + 60;
  Serial.print(us);
  Serial.println(" ms.");
  digitalWrite(buzzerPin, HIGH);
  delayMicroseconds(us);
  digitalWrite(buzzerPin, LOW);
  delayMicroseconds(us);
}
