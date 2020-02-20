#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Thermistor
int ThermistorPin = A0;
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

// i2c LCD
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() 
{
  Serial.begin(9600);
  LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd.begin(16, 2);
}

void loop() {
  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  T = T - 273.15;
  //T = (T * 9.0)/ 5.0 + 32.0; 
  lcd.begin(16, 2);
  lcd.print("Temp: ");
  lcd.print(T);
  lcd.print("C");
/*
  Serial.print("Temperature: "); 
  Serial.print(T);
  Serial.println(" C"); 
*/
  delay(1000);
  lcd.clear();
}
