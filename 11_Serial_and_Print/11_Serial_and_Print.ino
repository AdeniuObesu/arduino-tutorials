float pi = 3.14159265;
float r = 2;
float area;
int pauseTime = 750;
String lexpression = "A circle with radius : ";
String rexpression = " Has an area of : ";
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(lexpression);
  Serial.print(r);
  Serial.print(rexpression);
  area = pi * r * r;
  Serial.print(area);
  Serial.println(".");
  delay(pauseTime);
  r+=.5;
}
