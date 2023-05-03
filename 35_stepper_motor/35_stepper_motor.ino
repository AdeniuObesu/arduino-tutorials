#include <Stepper.h>
int stepsPerRevolution = 2048, rpm = 10, pause = 1000;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(rpm);
}

void loop() {
  myStepper.step(stepsPerRevolution);
  delay(pause);
  myStepper.step(-stepsPerRevolution);
  delay(pause);
}
