int red = 7;
int blue = 6;
int green = 5;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  delay(1000); // menunggu 1 detik
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  delay(1000); // menunggu 1 detik
}