

int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{

  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  // Sets the trigger pin to HIGH state for 10 microseconds
 
 digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  
// Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  // measure the ping time in cm
 int range;
  cm = 0.01723 * readUltrasonicDistance(6, 7);
  Serial.print(cm);
  Serial.println("cm");
  //range=200;
  //int height = range-cm;
  //Serial.print("HIGHT:");
  //Serial.println(height);
  delay(100); // Wait for 100 millisecond(s)
}
