

#include <MQ135.h>
#include <MQ2.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <cvzone.h>

#define BLYNK_AUTH_TOKEN "aM2KwL_DKvw25RPQ6k1-khwZIu2uYoBl" //Enter your blynk auth token
int pin = A0,mq4=D7,mq135=D8,trig1 =12,trig2=0,echo1=4,echo2=16;

SerialData datarecev(1,1);
int value[1];

double co,smoke,lpg,cm,cm1,co2,meth,ppm;
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Galaxy M116170";//Enter your WIFI name
char pass[] = "vijay09092002";//Enter your WIFI password
MQ2 mq2(pin);
MQ135 mq135_1(mq135);

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



void setup() {
  //Set the LED pin as an output pin
  Serial.begin(9600);
  datarecev.begin();
  pinMode(D4,OUTPUT);
  pinMode(meth,INPUT);
  //pinMode(ppm,INPUT);
  /*lcd.begin(16, 2);     
  lcd.setBacklight(1);*/
  mq2.begin();/*
  lcd.setCursor(0, 0);
  lcd.print("MANHOLEDETECTION");*/
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  cm = 0.01723 * readUltrasonicDistance(trig2, echo2);
    cm1 = 0.01723 * readUltrasonicDistance(trig1, echo1);
  meth = analogRead(mq4);
  //ppm = analogRead(mq135);
  ppm = mq135_1.getPPM();
  datarecev.Get(value);
  digitalWrite(D4,value[0]);
  Blynk.run();
  Blynk.virtualWrite(V0, mq2.readLPG()); 
  Blynk.virtualWrite(V1, mq2.readCO()); 
  Blynk.virtualWrite(V2, mq2.readSmoke());
  Blynk.virtualWrite(V3, cm);
  Blynk.virtualWrite(V4, ppm);
  Blynk.virtualWrite(V6, meth);
  Blynk.virtualWrite(V5, cm1);
  
  /*
  Serial.print(cm);
  Serial.println("cm");
  Serial.print(cm1);
  Serial.println("cm");
  Serial.print("LPG: ");
  Serial.println(mq2.readLPG(),4);
  Serial.print("CO: ");
  Serial.println(mq2.readCO(),4);                 // Print on Serial Monitor
  Serial.print("Smoke: ");
  Serial.println(mq2.readSmoke(),4);
  Serial.print("methane:");
  Serial.println(meth,4);
  Serial.print("co2:");
  Serial.println(ppm,4);
  /*if(cm1<10){
  lcd.setCursor(0, 1);
  lcd.print("STATUS: CLOSED");
  }
  else{
  lcd.setCursor(0, 1);
  lcd.print("STATUS: OPEN");
  }*/
  delay(100);
  
}
