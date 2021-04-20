int pingPin{7};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  long duration, distance; // deklarasi waktu dan jarak
  
  pinMode(pingPin, OUTPUT); 	// atur sensor menjadi OUTPUT
  digitalWrite(pingPin, LOW); 	// atur pin awal menjadi LOW
  delayMicroseconds(2); 		// delay 2 micro detik
  digitalWrite(pingPin, HIGH); 	// atur pin menjadi HIGH (menyala)
  delayMicroseconds(5); 		// trigger sensor selama 5 microsecond
  digitalWrite(pingPin, LOW); 	// atur signal pin menjadi LOW
  
  pinMode(pingPin, INPUT); 					// atur sensor menjadi INPUT
  duration = pulseIn(pingPin, HIGH);  		// meminta input waktu dari sensor
  distance = durationToDistance(duration);	// menghitung besar jarak berdasarkan waktu yang diperoleh
  Serial.print(distance);
  Serial.print(" cm");
  Serial.println();
  delay(100);
}

long durationToDistance(long duration){
  long hasil;
  hasil = 340 * duration / 10000 / 2;
  return hasil;
}