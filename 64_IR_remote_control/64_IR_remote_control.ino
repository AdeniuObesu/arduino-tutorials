#include <IRremote.h>
int IRpin = 8;
IRrecv sensor(IRpin);
decode_results cmd;
int lazinessTime = 100;

void setup() {
  Serial.begin(9600);
  sensor.enableIRIn();// Enables the module (starts it).

}

void loop() {
  // Sit and wait for data
  while(sensor.decode(&cmd) == 0);
  Serial.println(cmd.value, HEX);
  delay(lazinessTime);
  sensor.resume();
}
