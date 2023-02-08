#include <Servo.h>
Servo myservo;

#define Trig 4
#define Echo 3
const int sensorPin = A0;



  





long int durata;
float distanza;
void setup(){
 myservo.attach(9);  // attacca il servo alla pin 9
  pinMode(Echo, INPUT); 
  pinMode(Trig,OUTPUT);
 // Serial.begin(9600);
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  //int sensorValue = analogRead(sensorPin);
  //Serial.println(sensorValue);
  delay(100);
 

}
void loop(){
//digitalWrite(Trig,0);
//delayMicroseconds(10);
//digitalWrite(Trig,1);
//delayMicroseconds(10);
//digitalWrite(Trig,0);
for (int i = 0; i <= 180; i++) {
    myservo.write(i);  // muovi il servo a un angolo specifico
    delay(15);
  }
  for (int i = 180; i >= 0; i--) {
    myservo.write(i);  // muovi il servo a un angolo specifico
    delay(15);
  }

//durata=pulseIn(Echo,1);
//distanza= 0.034*durata / 2;
//Serial.print(distanza);
//Serial.println("cm");
delay(1000);
}
 
 
