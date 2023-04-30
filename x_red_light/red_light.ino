int redPin = 7;
int greenPin = 8;
int yellowPin = 12;
int yassir_ydouz = 4000;
int yassir_ywqef = 4000;
int shortDelay = 500;
int longDelay = 1000;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
  // on va allumer la lampe rouge.
  digitalWrite(redPin, HIGH);
  delay(yassir_ydouz);
  digitalWrite(redPin, LOW);
  // directement on allume la lampe verte.
  digitalWrite(greenPin, HIGH);
  delay(yassir_ywqef);
  digitalWrite(greenPin, LOW);
  // puis finalement clignoter 3 fois la lampe jaune
  digitalWrite(yellowPin, HIGH);
  delay(longDelay);
  digitalWrite(yellowPin, LOW);
  delay(shortDelay);
  digitalWrite(yellowPin, HIGH);
  delay(longDelay);
  digitalWrite(yellowPin, LOW);
  delay(shortDelay);
  digitalWrite(yellowPin, HIGH);
  delay(longDelay);
  digitalWrite(yellowPin, LOW);
  delay(shortDelay);
}