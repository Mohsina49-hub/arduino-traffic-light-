
int redLED = 8;
int yellowLED = 9;
int greenLED = 10;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Red: Stop
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(5000);

  // Green: Go
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(5000);

  // Yellow: Caution
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(5000);

  digitalWrite(yellowLED, LOW);
}
