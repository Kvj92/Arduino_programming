
#include <IRremote.h>
int ldr= A0,relay=4,ir=7;
int rele=LOW;

decode_results results;

void setup()
{
  Serial.begin(9600);
 
  pinMode(relay,OUTPUT);
  Serial.println("ENABLING PIN");
  IrReceiver.begin(ir);
  Serial.println("PIN ENABLED");
}

void ldr_led()
{
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
 
}
void loop()
{ 
  int flag;
  Serial.println("1.CONTROL BULB USING IR REMOTE ONLY\n2.CONTROL BULB USING DISTANCE SENSOR\n3.CONTROL BULB USING LDR\n");
   unsigned int val;
   int running=1;
 while(running)
 {
  if(IrRece.decode())
  { 
    val= IrReceiver.decodedIRData.decodedRawData;
  Serial.println(val);
   
    
   
     
  switch(val)
  {
  case 32640:
      rele=~rele;
      digitalWrite(relay,rele);
      delay(300); 
      break;

  case 18615:
      if(Serial.available()>=0)
        flag=Serial.read();
      Serial.println(flag);
      while(flag == '1')
        ldr_led();
      break;
    default:
      running=0;
      break;
    
  }
      IrReceiver.resume();
  
  }
    delay(300);
 }
  
  
}


      
