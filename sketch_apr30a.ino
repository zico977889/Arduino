
#include <I2CIO.h>
#include <LCD.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal_SR.h>
#include <LiquidCrystal_SR2W.h>
#include <LiquidCrystal_SR3W.h>

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
void setup()  
{
  Serial.begin(9600);  
  lcd.begin(16,2);  
  lcd.backlight();
  lcd.setCursor(4,0);
  lcd.print("EMIL NOOB");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("xddddddddddddddddddddd");
  delay(8000);  
 
 
}
 
 
void loop()  
{
  {
     
   
  }
}
 
