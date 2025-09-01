#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd_1(0x27, 16, 2);

// Fungsi untuk print dengan efek ketik
void typeText(int col, int row, const char *text, int speed) {
  lcd_1.setCursor(col, row);  // posisi awal
  for (int i = 0; text[i] != '\0'; i++) {
    lcd_1.print(text[i]);     // print 1 karakter
    delay(speed);             // jeda antar huruf
  }
}

void setup() {
  lcd_1.init();
  lcd_1.backlight();
  lcd_1.display();
}

void loop() {
  lcd_1.clear();
  typeText(0, 0, "If I Had a Gun", 120);  // speed 120ms per huruf
  typeText(0, 1, "-Noel Gallaghers", 120);
  delay(6000);

  lcd_1.clear();
  typeText(0, 0, "Let me fly you ", 80);
  typeText(0, 1, " to the moon", 80);
  delay(600);

  lcd_1.clear();
  typeText(0, 0, "My eyes ", 100);
  typeText(0, 1, "have always" , 100);
  delay(300);

  lcd_1.clear();
  typeText(0, 0, "followed you", 100);
  typeText(0, 1, "around the room", 100);
  delay(1000);

  lcd_1.clear();
  typeText(0, 0, "Cause you're", 100);
  typeText(0, 1, " the only", 100);
  delay(40);

lcd_1.clear();
  typeText(0, 0, "God that I", 100);
  typeText(0, 1, "will ever need", 100);
  delay(800);

  
lcd_1.clear();
  typeText(0, 0, "I'm holding on", 100);
  delay(500);

  
lcd_1.clear();
  typeText(0, 0, "Im waiting", 100);
  typeText(0, 1, "for the", 100);
  delay(200);
  lcd_1.clear();
  typeText(0, 0, "moment to", 100);
  typeText(0, 1, "find me", 100);
  delay(10000);





}
