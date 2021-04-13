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
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blue, LOW);
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  digitalWrite(blue, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
}