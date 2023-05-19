#include <SoftwareSerial.h>

const byte rxPin = 9;
const byte txPin = 8;
SoftwareSerial BTSerial(rxPin, txPin); // RX TX

void setup() {
  // define pin modes for tx, rx
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  BTSerial.begin(9600);
  Serial.begin(9600);
}

String messageBuffer = "";
String message = "";
char data;

void loop() {
  while(BTSerial.available() > 0) {
    data = (char) BTSerial.read();
    messageBuffer += data;
    if(data == ';') {
      message = messageBuffer;
      messageBuffer = "";
      Serial.print("YOU - ");
      Serial.print(message); // send to serial monitor
      BTSerial.print("HC-05 - ");
      BTSerial.print(message);
    }
  }
}
