#include <LiquidCrystal.h>
#include <MQ135.h>

// Pin definitions
const int rsPin = 16;
const int ePin = 5;
const int d4Pin = 4;
const int d5Pin = 0;
const int d6Pin = 2;
const int d7Pin = 14;

int buzzer = 12;
int smoke = A0;

// LCD object
LiquidCrystal lcd(rsPin, ePin, d4Pin, d5Pin, d6Pin, d7Pin);

void setup() {

  pinMode(buzzer, OUTPUT);
  pinMode(smoke, INPUT);
  Serial.begin(9600);

  // Initialize the LCD
  lcd.begin(16, 2);
}

void loop() {

  MQ135 gas_sensor = MQ135(A0);
  float air_quality = gas_sensor.getPPM();

  Serial.print("Air quality: ");
  Serial.println(air_quality);

  int gasSensor = analogRead(smoke);
  Serial.print("Pin A0: ");
  Serial.println(gasSensor);
  
  //LCD display
  if(air_quality<1000)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Fresh Air");
    lcd.setCursor(0, 1);
    lcd.print("PPM: ");
    lcd.print(air_quality);
    noTone(buzzer);
  }
  else if(air_quality>=1000 && air_quality<=2000)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Poor Air");
    lcd.setCursor(0, 1);
    lcd.print("PPM: ");
    lcd.print(air_quality);
    noTone(buzzer);
  }
  else
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Danger!!");
    lcd.setCursor(0, 1);
    lcd.print("PPM: ");
    lcd.print(air_quality);
    tone(buzzer, 494, 500);
  }

  delay(1000);
}