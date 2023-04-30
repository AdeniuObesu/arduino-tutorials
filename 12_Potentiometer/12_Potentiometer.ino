// Get a potentiometer and make the appropriate circuit
float V2 = 0;
int readPin = A3;
int pauseTime = 750;
void setup() {
  Serial.begin(9600);
  pinMode(readPin, INPUT);
}

void loop() {
  V2 = analogRead(readPin) * 5./1023;
  Serial.print("The voltage is equal to : ");
  Serial.println(V2);
  delay(pauseTime);
}
