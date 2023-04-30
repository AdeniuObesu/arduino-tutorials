// Photo resistor
/*
* As I turn the light off the resistance goes up
* so the current goes down and finally the voltage drops.
* In this example the red led turns on when the light turns off in the room
* and the yellow led turns off when the light turns on in the room
*/
int readPin = A0;
int redPin = 7;
int yellowPin = 8;
int lightValue;
int limit = 100;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightValue = analogRead(readPin);
  Serial.println(lightValue);
  if(lightValue < limit){
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
  }
}
