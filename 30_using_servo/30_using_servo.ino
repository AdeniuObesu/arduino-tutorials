#include <Servo.h>

int pin = 13;
int pause = 5000;
Servo myServo;

void setup() {
  myServo.attach(pin);
}

void loop() {
  myServo.write(0);
  delay(pause);
  myServo.write(24);
  delay(pause);
  myServo.write(45);
  delay(pause);
  myServo.write(69);
  delay(pause);
  myServo.write(90);
  delay(pause);
  myServo.write(180);
  delay(pause);
}
