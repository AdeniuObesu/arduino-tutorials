// changing tone of an active buzzer, connect the buzzer to pin 2 and have fun.
int buzzerPin = 2;
int counter = 100;
int j;
int first_pause = 4;
int second_pause = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for(j = counter; j > 0; j--){
    digitalWrite(buzzerPin, HIGH);
    delay(first_pause);
    digitalWrite(buzzerPin, LOW);
    delay(first_pause);
  }
  for(j = counter; j > 0; j--){
    digitalWrite(buzzerPin, HIGH);
    delay(second_pause);
    digitalWrite(buzzerPin, LOW);
    delay(second_pause);
  }
}
