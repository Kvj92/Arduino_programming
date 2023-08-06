int led=11;
int button=12 ;
boolean lstatus=LOW;
boolean cstatus=LOW;
boolean leds=LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  cstatus=digitalRead(button);
  if(lstatus!=cstatus)
  {
    delay(5);
    cstatus=digitalRead(button);
    
  }
  else if(lstatus==HIGH && cstatus==LOW)
  {
    leds=!leds;
  }
  lstatus=cstatus;
  digitalWrite(led,leds);
}
