int readPin = A3;
int readValue;
float V2 = 0;
int time = 500;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(readPin);
  V2 = (5./1023) * readValue;
  Serial.println(V2);
  delay(time);
}
