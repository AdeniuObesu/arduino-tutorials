int Xpin = A0;
int Ypin = A1;
int SWpin = 2;
int Xvalue, Yvalue, SWvalue;
int pause = 200;

void setup() {
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(SWpin, INPUT);
  digitalWrite(SWpin, HIGH); // See : Pull up resistor with switches
}

void loop() {
  Xvalue = analogRead(Xpin);
  Yvalue = analogRead(Ypin);
  SWvalue = digitalRead(SWpin);
  Serial.print("X = ");
  Serial.print(Xvalue);
  Serial.print(", ");
  Serial.print("Y = ");
  Serial.print(Yvalue);
  Serial.print(", ");
  Serial.print("Switch state (");
  Serial.print(SWvalue);
  Serial.println(")");
}
