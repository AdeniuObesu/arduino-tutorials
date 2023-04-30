int blinks;
int i;
int redPin = 12;
int pauseTime = 500;
String askMsg = "How many blinks do you want ?";
String answerMsg = "Blink number : ";
void setup() {
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 3 things to do : Ask, Wait, Read.
  // Ask
  Serial.println(askMsg);
  // Wait
  while(Serial.available() == 0);
  // Read
  blinks = Serial.parseInt();
  i = 0;
  while(++i <= blinks){
    Serial.print(answerMsg);
    Serial.print(i);
    Serial.print("/");
    Serial.println(blinks);
    digitalWrite(redPin, HIGH);
    delay(pauseTime);
    digitalWrite(redPin, LOW);
    delay(100);
  }
}
