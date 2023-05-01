#include <LiquidCrystal.h>
// LCD 1602 attached to following pins.
int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
int pause = 500;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Our LCD has 16 columns and 2 rows
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("WATCH ME COUNT");
  for(int j=1; j<=10; j++){
    lcd.setCursor(0, 1);
    lcd.print(j);
    delay(pause);
  }
  lcd.clear();
}