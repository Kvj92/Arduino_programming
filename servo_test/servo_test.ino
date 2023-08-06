
#include <Servo.h>
Servo name_servo;
void setup() {
  // put your setup code here, to run once:
name_servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
name_servo.write(180);

}
