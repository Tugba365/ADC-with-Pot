#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorValue;

void setup() {

Serial.begin(9600);
lcd.begin(8, 2);
lcd.setCursor(0, 0);
lcd.print("Starting...");
delay(3000);
}

void loop()
{
  sensorValue = analogRead(A0);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("The Value:");
  lcd.setCursor(8, 1);
  lcd.print(sensorValue);
  Serial.print("The Value:");
  Serial.println(sensorValue);
  delay(250);
  }
