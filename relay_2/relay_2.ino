const int re = 4;  // the Arduino pin, which connects to the IN pin of relay

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as an output.
  pinMode(re, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(re, HIGH);
  delay(500);
  digitalWrite(re, LOW);
  delay(500);
}
