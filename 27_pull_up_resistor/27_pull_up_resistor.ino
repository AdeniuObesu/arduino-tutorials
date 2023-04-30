// A pull up resistor.
int buttonPin = 12;
int ledPin = 8;
int buttonRead; // 0 or 1 depends whether the switch is open or short
int pause = 250;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonRead = digitalRead(buttonPin);
  Serial.print("The value is : ");
  Serial.println(buttonRead);
  if(buttonRead == 1){
    digitalWrite(ledPin, HIGH);
  }
  if(buttonRead == 0){
    digitalWrite(ledPin, LOW);
  }
  // delay(pause);
}
