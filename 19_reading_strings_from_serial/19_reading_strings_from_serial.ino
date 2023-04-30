char color;
String question = "What led do you want turn on (Red, Yellow or Blue) ?";
int redPin = 2;
int yellowPin = 7;
int bluePin = 4;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(question);
  while(Serial.available() == 0);
  color = Serial.readString()[0];
  Serial.println(color);

  switch(color){
    case('R') : digitalWrite(redPin, HIGH);digitalWrite(yellowPin, LOW);digitalWrite(bluePin, LOW);break;
    case('Y') : digitalWrite(redPin, LOW);digitalWrite(yellowPin, HIGH);digitalWrite(bluePin, LOW);break;
    case('B') : digitalWrite(redPin, LOW);digitalWrite(yellowPin, LOW);digitalWrite(bluePin, HIGH);break;
    default : Serial.println("OUPS ! make sure to choose an available option !");
  }
}
