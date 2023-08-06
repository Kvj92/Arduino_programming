// constants won't change
#include<IRremote.h>
const int ldr = A0; // Arduino pin connected to light sensor's  pin
const int re  = 4;  // Arduino pin connected to Relay's pin
const int threshold = 100;
int ir=7;
IRrecv irrecv(ir);
decode_results results;
// variables will change:
int analogValue;

void setup() {
  Serial.begin(9600);
  pinMode(re, OUTPUT);
  Serial.println("ENABLING PIN");
  irrecv.enableIRIn();
  Serial.println("PIN ENABLED");// set arduino pin to output mode
}

void loop() {
  int val;
  if(irrecv.decode(&results))
  { 
    val= results.value;
  Serial.println(val);
   
  analogValue = analogRead(ldr); // read the input on analog pin
  Serial.println(analogValue);
  while(val==32003)
  {
  if(analogValue <threshold)
    digitalWrite(re, LOW); // turn on Relay
  else
    digitalWrite(re,HIGH);  // turn off Relay
}
  }
}
