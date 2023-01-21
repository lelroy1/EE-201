int val = 0;
void setup() {
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // reads value and prings hello world if high and its 2023 if not
  // first if statement is so it doesn't double print
  if (val != digitalRead(12)) {
      val = digitalRead(12);
    if (val) {
      Serial.println("Hello World!");
    } else {
      Serial.println("It's 2023");
    }
  }
  delay(150);
}
