#include <cvzone.h>
SerialData datarecv(1,1);
int value[1];
void setup() {
 datarecv.begin();
 pinMode(10,OUTPUT);
 

}

void loop() {
  datarecv.Get(value);
  digitalWrite(10,value[0]);
}
