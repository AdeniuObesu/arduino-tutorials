#include <IRremote.h>

class RemoteControl {
  public :
    static String translate(unsigned long hex_value) {
      String command;
      switch(hex_value){
        case(0xE318261B) : command = "CH-"; break;
        case(0x511DBB) : command = "CH";break;
        case(0xEE886D7F) : command = "CH+"; break;
        case(0x52A3D41F) : command = "|<<";break;
        case (0xD7E84B1B) : command = ">>|";break;
        case(0x20FE4DBB) : command = "|>||"; break;
        case(0xF076C13B) : command = "-";break;
        case (0xA3C8EDDB) : command = "+";break;
        case (0xE5CFBD7F) : command = "EQ";break;
        case(0xC101E57B) : command = "0";break;
        case (0x97483BFB) : command = "100+";break;
        case (0xF0C41643) : command = "200+";break;
        case(0x9716BE3F) : command = "1";break;
        case (0x3D9AE3F7) : command = "2";break;
        case (0x6182021B) : command = "3";break;
        case (0x8C22657B) : command = "4";break;
        case (0x488F3CBB) : command = "5";break;
        case (0x449E79F) : command = "6";break;
        case (0x32C6FDF7) : command = "7";break;
        case (0x1BC0157B) : command = "8";break;
        case (0x3EC3FC1B) : command = "9";break;
        default:;
      }
      return command;
    }
};

int pin = 8;
IRrecv ir(pin);
int irLaziness = 75;
decode_results cmd;
void setup() {
  Serial.begin(9600);
  ir.enableIRIn();
}

void loop() {
  // Sit and wait:
  while(ir.decode(&cmd) == 0);
  String buttonPressed = RemoteControl::translate(cmd.value);
  if(buttonPressed.length() > 0){
    Serial.print("You pressed the button : ");
    Serial.println(buttonPressed);
  }
  delay(irLaziness);
  ir.resume();
}
