// Get a passive buzzer and connect it to pin No 8
int buzzerPin = 8;
int first_pause = 1;
int second_pause = 60;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzerPin, HIGH);
  delayMicroseconds(first_pause);
  digitalWrite(buzzerPin, LOW);
  delayMicroseconds(second_pause);
}
