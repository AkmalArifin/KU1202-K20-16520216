void setup() {
  pinMode(6, OUTPUT);
}

void loop() {
  for(int counter = 0; counter <3; counter++) { // mengulang sebanyak 3 kali
    digitalWrite(6, HIGH);
    delay(1000); // menunggu selama 1 detik
    digitalWrite(6, LOW);
    delay(1000); // menunggu selama 1 detik
  }
  delay(5000); // menunggu selama 5 detik
}