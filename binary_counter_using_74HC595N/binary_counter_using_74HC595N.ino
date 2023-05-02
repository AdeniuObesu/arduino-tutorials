int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int leds = 0x00;
int pause = 1000;
/*
* It counts binaries from starting from 0x00 until it comes to 0xFF and turns on the leds
* to simulate the binary representation of each number on the way.
*/

void setup() {
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  while(leds++ < 0xFF){
    Serial.print("PRINTING : ");
    Serial.println(leds, HEX);
    delay(pause);
    
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
  }
}