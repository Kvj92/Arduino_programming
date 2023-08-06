
#include<IRremote.h>
int relay=4,receiver=7;
IRrecv irrecv(7);
decode_results mode;
decode_results button;
void setup()
{
  Serial.begin(9600);
  Serial.println("ENABLING PIN");
  irrecv.enableIRIn();
  Serial.println("PIN ENABLLED");
  pinMode(relay, OUTPUT);
}
void loop() {
  
  if (irrecv.decode(&button)) 
  {          
    Serial.println(button.value, HEX);   
  
    if (button.value == 0x1FE50AF
){         
      digitalWrite(relay, HIGH) ;}         
      delay(50);                         
    if (button.value == 0x1FED827
){         
      digitalWrite(relay, LOW);}          
      delay(50);
    
    irrecv.resume(); 
  }
  delay(100);
}
   
