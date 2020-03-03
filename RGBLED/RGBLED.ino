int greenPin = 5;
int bluePin = 6;
int redPin = 7;


void setup() 
{
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() 
{
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(redPin, LOW);
  delay(1000);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(redPin, LOW);
  delay(1000);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(redPin, HIGH);
  delay(1000);

}
