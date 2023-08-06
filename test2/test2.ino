// intialize pin 
int rl1=3,bl1=5,gl1=6;
int rl2=9,bl2=10,gl2=11;
int rl3=A0,bl3=A1,gl3=A2;
int ir=7;
IRrecv irrecv(ir);
decode_results results;
void setup() {
  // set baud rate
  Serial.begin(9600);
  pinMode(ir,INPUT);
  Serial.println("enabling pin");
  irrecv.enableIRIn();
  Serial.println("pin enabled");
  irrecv.blink13(true);
}

void loop() {
  r1=analogRead(rl1);
  b1=analogRead(bl1);
  g1=analogRead(gl1);
  r2=analogRead(rl2);
  b2=analogRead(bl2);
  g2=analogRead(gl2);
  r3=analogRead(rl3);
  b3=analogRead(bl3);
  g1=analogRead(gl3);
  unsigned int value;
  if(irrecv.decode(&results)
  {
    val=results.value;
    Serial.print("pressed key");
    Serial.println(val,HEX);
    if(val==)                 // WHITE AND RED
    {
      analogWrite(r1,HIGH);
      analogWrite(b1,LOW);
      analogWrite(g1,LOW);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,LOW);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,LOW);
      analogWrite(g2,LOW);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==)              // WHITE AND BLUE
    {
      analogWrite(r1,LOW);
      analogWrite(b1,HIGH);
      analogWrite(g1,LOW);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,LOW);
      analogWrite(b3,HIGH);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,LOW);
      analogWrite(b2,HIGH);
      analogWrite(g2,LOW);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==)                  // WHITE AND GREEN
    {
      analogWrite(r1,LOW);
      analogWrite(b1,LOW);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,LOW);
      analogWrite(b3,LOW);
      analogWrite(g3,HIGH);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,LOW);
      analogWrite(b2,LOW);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==)
    {
      analogWrite(r1,HIGH);  //WHITE AND PINK
      analogWrite(b1,HIGH);
      analogWrite(g1,LOW);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,LOW);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==) // WHITE AND LIGHT BLUE
    {
      analogWrite(r1,LOW);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,LOW);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,LOW);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==)     // WHITE AND YELLOW
    {
      analogWrite(r1,HIGH);
      analogWrite(b1,LOW);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,LOW);
      analogWrite(g3,HIGH);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,LOW);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }

    else if(val==)       // BLUE AND PINK
    {
      analogWrite(r1,LOW);
      analogWrite(b1,HIGH);
      analogWrite(g1,LOW);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,LOW);

      analogWrite(r3,LOW);
      analogWrite(b3,HIGH);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,LOW);
      
      analogWrite(r2,LOW);
      analogWrite(b2,HIGH);
      analogWrite(g2,LOW);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,LOW);
      delay(100);
        
    }
    else if(val==)  // BLUE AND LIGHT BLUE
    {
      analogWrite(r1,LOW);
      analogWrite(b1,HIGH);
      analogWrite(g1,LOW);
      
      analogWrite(r2,LOW);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,LOW);
      analogWrite(b3,HIGH);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,LOW);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,LOW);
      analogWrite(b2,HIGH);
      analogWrite(g2,LOW);

      analogWrite(r3,LOW);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }  
    else if(val==) // BLUE AND YELLOW
    {
      analogWrite(r1,LOW);
      analogWrite(b1,HIGH);
      analogWrite(g1,LOW);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,LOW);
      analogWrite(g2,HIGH);

      analogWrite(r3,LOW);
      analogWrite(b3,HIGH);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,LOW);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,LOW);
      analogWrite(b2,HIGH);
      analogWrite(g2,LOW);

      analogWrite(r3,HIGH);
      analogWrite(b3,LOW);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==) // RED AND LIGHT BLUE
    {
      analogWrite(r1,HIGH);
      analogWrite(b1,LOW);
      analogWrite(g1,LOW);
      
      analogWrite(r2,LOW);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,LOW);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,LOW);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,LOW);
      analogWrite(g2,LOW);

      analogWrite(r3,LOW);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==)      // RED AND YELLOW 
    {
      analogWrite(r1,HIGH);
      analogWrite(b1,LOW);
      analogWrite(g1,LOW);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,LOW);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,LOW);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,LOW);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,LOW);
      analogWrite(g2,LOW);

      analogWrite(r3,HIGH);
      analogWrite(b3,LOW);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==)                 // PINK AND RED
    {
      analogWrite(r1,HIGH);
      analogWrite(b1,LOW);
      analogWrite(g1,LOW);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,LOW);

      analogWrite(r3,HIGH);
      analogWrite(b3,LOW);
      analogWrite(g3,LOW);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,LOW);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,LOW);
      analogWrite(g2,LOW);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,LOW);
      delay(100);
        
    }
    else if(val==)                  // LIGHT BLUE AND GREEN
    {
      analogWrite(r1,LOW);
      analogWrite(b1,LOW);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,LOW);
      analogWrite(b2,HIGH);
      analogWrite(g2,HIGH);

      analogWrite(r3,LOW);
      analogWrite(b3,LOW);
      analogWrite(g3,HIGH);
      delay(100);

      analogWrite(r1,LOW);
      analogWrite(b1,HIGH);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,LOW);
      analogWrite(b2,LOW);
      analogWrite(g2,HIGH);

      analogWrite(r3,LOW);
      analogWrite(b3,HIGH);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==)                  // YELLOW AND GREEN
    {
      analogWrite(r1,LOW);
      analogWrite(b1,LOW);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,LOW);
      analogWrite(g2,HIGH);

      analogWrite(r3,LOW);
      analogWrite(b3,LOW);
      analogWrite(g3,HIGH);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,LOW);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,LOW);
      analogWrite(b2,LOW);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,LOW);
      analogWrite(g3,HIGH);
      delay(100);
        
    }
    else if(val==)                  // PINK AND GREEN
    {
      analogWrite(r1,LOW);
      analogWrite(b1,LOW);
      analogWrite(g1,HIGH);
      
      analogWrite(r2,HIGH);
      analogWrite(b2,HIGH);
      analogWrite(g2,LOW);

      analogWrite(r3,LOW);
      analogWrite(b3,LOW);
      analogWrite(g3,HIGH);
      delay(100);

      analogWrite(r1,HIGH);
      analogWrite(b1,HIGH);
      analogWrite(g1,LOW);
      
      analogWrite(r2,LOW);
      analogWrite(b2,LOW);
      analogWrite(g2,HIGH);

      analogWrite(r3,HIGH);
      analogWrite(b3,HIGH);
      analogWrite(g3,LOW);
      delay(100);
        
    }
    irrecv.resume();
  }
}
