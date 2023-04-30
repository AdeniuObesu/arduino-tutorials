int readPin = A2;
int redPin = 9;
int readValue;
float V2;
int blueBright = 0;
int bluePin = 3;
int pauseTime = 750;

void setup() {
  pinMode(redPin, OUTPUT); // To turn on and off the red light
  pinMode(readPin, INPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(readPin);
  V2 = (5./1023) * readValue;
  Serial.print("Potentiometer voltage is : ");
  Serial.print(V2);
  Serial.println(" Volts");
  blueBright = (int) (V2 * 255)/5.;
  analogWrite(bluePin, blueBright);
  if(V2 >= 4.5){
    digitalWrite(redPin, HIGH);
    Serial.println("DANGER ZONE");
  } else {
    digitalWrite(redPin, LOW);
  }
  delay(pauseTime);
}
