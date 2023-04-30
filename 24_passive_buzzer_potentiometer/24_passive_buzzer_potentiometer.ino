// Get your passive buzzer, we'll control it with a potentiometer
int readPin = A1;
int buzzerPin = 8;
unsigned int toneValue;
int readValue;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  readValue = analogRead(readPin);
  toneValue = (9940/1023.) * readValue + 60;
  digitalWrite(buzzerPin, HIGH);
  delayMicroseconds(toneValue);
  digitalWrite(buzzerPin, LOW);
  delayMicroseconds(toneValue);
}
