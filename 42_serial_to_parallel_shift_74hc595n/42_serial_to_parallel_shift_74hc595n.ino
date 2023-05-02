#include <IRremote.h>
int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
byte pause = 2000;
/*
* In this example the user clicks in a remote control button and sees the binary representation
* of the number he clicked on. hex numbers like 0x00, 0x11, 0x22 ... 0xff.
*/
class RemoteControl {
  public :
    static byte translate(unsigned long hex_value) {
      String command;
      switch(hex_value){
        case (0xD7E84B1B) : return 0xFF;
        case(0xF076C13B) : return 0xCC;
        case (0xA3C8EDDB) : return 0xDD;
        case (0xE5CFBD7F) : return 0xEE;
        case(0xC101E57B) : return 0x00;
        case (0x97483BFB) : return 0xAA;
        case (0xF0C41643) : return 0xBB;
        case(0x9716BE3F) : return 0x11;
        case (0x3D9AE3F7) : return 0x22;
        case (0x6182021B) : return 0x33;
        case (0x8C22657B) : return 0x44;
        case (0x488F3CBB) : return 0x55;
        case (0x449E79F) : return 0x66;
        case (0x32C6FDF7) : return 0x77;
        case (0x1BC0157B) : return 0x88;
        case (0x3EC3FC1B) : return 0x99;
        default:;
      }
      return 0x10;
    }
};

int pin = 8;

IRrecv ir(pin);
int irLaziness = 75;
decode_results cmd;

void setup() {
  Serial.begin(9600);
  ir.enableIRIn();
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {

  // Sit and wait:
  while(ir.decode(&cmd) == 0);
  byte value = RemoteControl::translate(cmd.value);
  if(value != 0x10){
    Serial.print("You choose : ");
    Serial.println(value, HEX);
    delay(pause);
    
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, value);
    digitalWrite(latchPin, HIGH);
  }
  delay(irLaziness);
  ir.resume();
}