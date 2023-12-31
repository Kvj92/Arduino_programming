


#include <IRremote.h>
int ldr= A0,relay=4,ir=7;
int rele=LOW;
IRrecv irrecv(ir);
decode_results results;

void setup()
{
  Serial.begin(9600);
 
  pinMode(relay,OUTPUT);
  pinMode(A0,INPUT);
  Serial.println("ENABLING PIN");
  irrecv.enableIRIn();
  Serial.println("PIN ENABLED");
}


void loop()
{ 
  int flag;
  Serial.println("1.CONTROL BULB USING IR REMOTE ONLY\n2.CONTROL BULB USING LDR\n");
   unsigned int val;
   while(
  if(irrecv.decode(&results))
  { 
    val= results.value;
  Serial.println(val);
   
  switch(val)
  {
  case 32003:
      rele=~rele;
      digitalWrite(relay,rele);
      delay(300); 
      break;

  case 55335:
       int LDR;
      
     LDR=analogRead(ldr);
    Serial.println(LDR);
    if(LDR<100)
    {
      
      Serial.println("Light IS ON");
      digitalWrite(relay,rele);
      delay(300);
    } 
    else
    { 
      rele=~rele;
      Serial.println("Light IS OFF");
      digitalWrite(relay,rele);
      delay(300);
    }
      break;
    default:
      break;
    
  }
      
  irrecv.resume();
    
   
  }
  
    
 
 
  
}


      
