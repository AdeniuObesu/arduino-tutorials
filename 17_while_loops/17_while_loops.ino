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
  j = 1;
  while(j<=yellowBlinks){
    digitalWrite(yellowPin, HIGH);
    delay(yellowTime);
    digitalWrite(yellowPin, LOW);
    delay(yellowTime);
    j++;
  }
  
  j = 1;
  while(j<=redBlinks){
    digitalWrite(redPin, HIGH);
    delay(redTime);
    digitalWrite(redPin, LOW);
    delay(redTime);
    j++;
  }
}
