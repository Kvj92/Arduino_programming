#include <Servo.h>
Servo name_servo;
int servo= 9;
int pos =0;
void setup() {
  name_servo.attach(servo);
  Serial.begin(9600);
}

void loop() {
  for(pos=0;pos<=180;pos++)
  {
    name_servo.write(pos);
    Serial.println("pass1");
    delayMicroseconds(100);
  }
   for(pos=180;pos>=0;pos--)
  {
    name_servo.write(pos);
    Serial.println("pass2");
    delayMicroseconds(100);
  }

}
