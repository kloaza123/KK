
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo myservo;

char auth[] = "WzWq-JT4U6tGvBIPF4lWQoRfh75l8Nr3";
char ssid[] = "MSI";
char pass[] = "0631467311";



void setup() {
  Serial.begin(9600);
   Blynk.begin(auth,ssid,pass);
 myservo.attach(D8);
  
}

void loop() {
Blynk.run();
}
BLYNK_WRITE(V1){
myservo.write(param.asInt());
}
BLYNK_WRITE(V2){
myservo.write(0);
}
BLYNK_WRITE(V3){
  myservo.write(180);
  }
 
