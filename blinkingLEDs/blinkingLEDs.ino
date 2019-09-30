int led8 = 8;

void setup() 
{
  pinMode(led8, OUTPUT);
}

void loop() 
{
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
}
