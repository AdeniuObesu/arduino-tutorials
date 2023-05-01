#include <Servo.h>
int Xpin = A0;
int servoPin = 3;
int Xvalue;
int angle;
Servo myServo;

void setup() {
  pinMode(Xpin, INPUT);
  myServo.attach(servoPin);
}

void loop() {
  Xvalue = analogRead(Xpin);
  angle = (180./1023) * Xvalue;
  myServo.write(angle);
  delay(1000);
}
