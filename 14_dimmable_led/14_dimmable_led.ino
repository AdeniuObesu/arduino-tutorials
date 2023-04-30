int bluePin = 9;
int readPin = A1;
int readValue;
float voltage;
int blueBright;
int pauseTime = 50;

void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(readPin);
  voltage = readValue * (5./1023);
  blueBright = voltage * (255/5.);
  analogWrite(bluePin, blueBright);
  Serial.print("The potentiemeter voltage is equal to ");
  Serial.println(voltage);
  delay(pauseTime);
}
