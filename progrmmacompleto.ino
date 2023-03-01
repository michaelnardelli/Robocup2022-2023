#include <Servo.h>
Servo myservo;
#define Trigavanti 5
#define Echoavanti 4
#define Trigsinistra 3
#define Echosininstra 2
#define Trigdestra 6
#define Echodestra 7

#define sensorecolorecentale 10
#define sensorecoloresinistra 12
#define sensorecoloredestra 11
int bianco = 1;
int nerto=0;
int verde=3;
int motori=200;
double distanzaL=20;
int angoloa=90;
int angoloc=25;
double distanza=0;

//min pin 1
//max pin 53

void setup() {
pinMode(sensorecolorecentale, INPUT);
pinMode(sensorecoloresinistra, INPUT);
pinMode(sensorecoloredestra, INPUT);
pinMode(Trigsinistra,OUTPUT);
pinMode(Trigavanti,OUTPUT);
pinMode(Trigsinistra,OUTPUT);
pinMode(Echodestra,INPUT);
pinMode(Echosininstra,INPUT);
pinMode(Echoavanti,INPUT);ù
}
int distanzaavanti(){

}
void sollevamtopallina(){

}
double calcoladistanzaavanti(){
    digitalWrite(Trigavanti, LOW);
delayMicroseconds(2);
digitalWrite(Trigavanti, HIGH);
delayMicroseconds(10);
digitalWrite(Echoavanti, LOW);
duration = pulseIn(echoPin, HIGH);
cm = (duration / 2) / 29.1; // la formula per calcolare la distanza in centimetri
return distatanzavnti;
} 
void loop() {
  if ()
  {
    /* code */
  }
  
  
  
}
  
  
}