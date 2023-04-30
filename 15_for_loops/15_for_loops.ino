int yellowPin = 6;
int redPin = 9;
int yellowTime = 500;
int redTime = 1000;
int yellowBlinks = 3;
int redBlinks = 5;
int j;

void setup() {
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(j=0; j<yellowBlinks; j++){
    digitalWrite(yellowPin, HIGH);
    delay(yellowTime);
    digitalWrite(yellowPin, LOW);
    delay(yellowTime);
  }
  
  for(j=0; j<redBlinks; j++){
    digitalWrite(redPin, HIGH);
    delay(redTime);
    digitalWrite(redPin, LOW);
    delay(redTime);
  }
}
