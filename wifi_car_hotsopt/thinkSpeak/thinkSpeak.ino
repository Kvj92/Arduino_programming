#include <ESP8266WiFi.h>;
#include <WiFiClient.h>;
#include <ThingSpeak.h>;
#include <MQ2.h>;
const char* ssid = "FTTH-F2C9";   // Your Network SSID
const char* password = "12345678";       // Your Network Password

int val;
float smoke,co,lpg;
int pin = A0; // LM35 Pin Connected at A0 Pin
MQ2 mq2(pin);
WiFiClient client;

unsigned long myChannelNumber = 2033421; //Your Channel Number (Without Brackets)
const char * myWriteAPIKey = "JW6U1ZWWPH5BVI11"; //Your Write API Key

void setup()
{
  Serial.begin(9600);
  delay(10);
  mq2.begin();
  // Connect to WiFi network
  WiFi.begin(ssid, password);
  ThingSpeak.begin(client);
}

void loop()
{
  lpg = mq2.readLPG();
  
  co = mq2.readCO();
  
  smoke = mq2.readSmoke();
   // Read Analog values and Store in val variable
  Serial.print("LPG: ");
  Serial.println(lpg);
  Serial.print("CO: ");
  Serial.println(co);                 // Print on Serial Monitor
  Serial.print("Smoke: ");
  Serial.println(smoke);                 // Print on Serial Monitor
  
  // Print on Serial Monitor
  
  delay(1000);
  ThingSpeak.writeField(myChannelNumber, 1,lpg, myWriteAPIKey);
  ThingSpeak.writeField(myChannelNumber, 2,co, myWriteAPIKey);
  ThingSpeak.writeField(myChannelNumber, 3,smoke, myWriteAPIKey);//Update in ThingSpeak
  delay(100);
}
