int redPin = A4;
int greenPin = A5;
int bluePin = A6; // maps to DAC pin

int redPotPin = A2;
int greenPotPin = A3;
int bluePotPin = A7; // maps to WKP pin

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {

  // integer division rounds down
  redValue = analogRead(redPotPin)/16;
  greenValue = analogRead(greenPotPin)/16;
  blueValue = analogRead(bluePotPin)/16;

  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);

  delay(10);
}