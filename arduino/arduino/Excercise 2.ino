void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Alternates leds
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  Serial.println("LED is ON");
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
