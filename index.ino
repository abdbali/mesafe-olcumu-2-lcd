#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int echopin=8;
int trigpin=9;
long sure=0,mesafe=0;
void setup() {
 lcd.begin(16,2);
 pinMode(echopin,INPUT);
pinMode(trigpin,OUTPUT);
}
void loop() {
 lcd.clear();
 digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
sure=pulseIn(echopin,HIGH);
mesafe=(sure/2)/29.1;
lcd.setCursor(0,0);
lcd.print("Mesafe= ");
lcd.setCursor(8,0);
lcd.print(mesafe);
delay(500);
}