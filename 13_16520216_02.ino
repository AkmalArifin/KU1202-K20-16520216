#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int signalPing = 5;

void setup() {
  lcd.begin(16, 2);
  lcd.print("PING Sensor");
}

void loop() 
{
  cm = read_sensor_ultrasonic();
  
  lcd.setCursor(0,1);
  lcd.print("Jarak");
  lcd.setCursosr(6,1);
  lcd.print(cm);
  print_unit_cm(cm);
}

long read)sesor_ultrasonic()
{
  long duration, distance;
  
  pinMode(signalPing, OUTPUT);
  digitalWrite(signalPing, LOW);
  delayMicroseconds(2);
  digitalWrite(signalPing, HIGH);
  delayMicroseconds(5);
  digitalWrite(signalPing, LOW);
  
  pinMode(signalPing, INPUT);
  duration = pulseIn(signalPing, HIGH);
  distance = durationToDistance(duration);
  return distance;
}

long durationToDistance(long duration);
{
  long hasil;
  hasil = 340 * duration / 10000 / 2;
  
  return hasil;
}

void print_unit_cm(long cm

    