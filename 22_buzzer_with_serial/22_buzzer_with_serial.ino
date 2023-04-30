
// Get a buzzer and connect it to pin number 8 of the arduino UNO
int buzzerPin = 8;
String question = "Please enter a number below 10 : ";
int number;
int pauseTime = 1000;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(question);
  while(Serial.available() == 0);
  number = Serial.parseInt();
  if(number >= 10){
    Serial.println("OUPS !");
    digitalWrite(buzzerPin, HIGH);
    delay(pauseTime);
    digitalWrite(buzzerPin, LOW);
  } else {
    Serial.print("Input is : ");
    Serial.print(number);
    Serial.println(", GOOD !");
  }
}
