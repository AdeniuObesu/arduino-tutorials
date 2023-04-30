int readPin = A0;
int buzzerPin = 8;
int readValue;
int limitValue = 1000;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(readPin);
  if(readValue > limitValue){
    Serial.print("DANGER ZONE --> ");
    Serial.print(readValue);
    Serial.print(" is above ");
    Serial.println(limitValue);
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  delay(500);
}
