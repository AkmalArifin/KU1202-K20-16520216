#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int signalPing = 5;
long cm;

void setup() {
  lcd.begin(16, 2);
  lcd.print("PING Sensor");
}

void loop() 
{
  cm = read_sensor_ultrasonic();
  
  lcd.setCursor(0,1);
  lcd.print("Jarak");
  lcd.setCursor(6,1);
  lcd.print(cm);
  print_unit_cm(cm);
}

long durationToDistance(long duration)
{
  long hasil;
  hasil = (340 * duration / 10000 / 2);
  return (hasil);
}

 

long read_sensor_ultrasonic()
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

void print_unit_cm(long cm) 
{
  int jumlahdigit = countdigit(cm);
  
  if (jumlahdigit == 2) {
    lcd.setCursor(8, 1);
    lcd.print("cm  ");
  }
  else if(jumlahdigit == 3) {
    lcd.setCursor(9, 1);
    lcd.print("cm  ");
  }
}

int countdigit(long input)
{
  int count = 0;
  
  while (input != 0){
    input = input / 10;
    count++;
  }
  
  return count;
}