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
int potenzamotorimax=200;
int potenzamotorimin=200;
double distanzaL=20;
int angoloa=90;
int angoloc=25;
double distanznti=0;
double distanzadestra=0;
double distanzasinistra=0;
int duration=0;
int angoloA=120;
int angoloC=90;
int indice=1;

 
//min pin 1
//max pin 53

void setup() {
    myservo.attach(4);
    myservo.attach(3);
pinMode(sensorecolorecentale, INPUT);
pinMode(sensorecoloresinistra, INPUT);
pinMode(sensorecoloredestra, INPUT);
pinMode(Trigdestra,OUTPUT);
pinMode(Trigavanti,OUTPUT);
pinMode(Trigsinistra,OUTPUT);
pinMode(Echodestra,INPUT);
pinMode(Echosininstra,INPUT);
pinMode(Echoavanti,INPUT);
}
void presapallina(){
for (indice<=angoloC; indice++);
{myservo.write(indice);
delay(10);
    }
indice=0;
 }
 


void solevamentopallina(){
  for (indice<=angoloA; indice++);
{myservo.write(indice);
delay(10);
    }
indice=0;
 }  
}
void evitamuro(){
    
    AnalogWrite(motoridestra,potenzamotorimax);
    AnalogWrite(motorisinistra,potenzamotorimin);

}
double calcoladistanzaavanti(){
    digitalWrite(Trigavanti, LOW);
delayMicroseconds(2);
digitalWrite(Trigavanti, HIGH);
delayMicroseconds(10);
digitalWrite(Echoavanti, LOW);
duration = pulseIn(Echoavanti, HIGH);
cm = (duration / 2) / 29.1; // la formula per calcolare la distanza in centimetri
return distanzaavanti;
} 
double calcoladistanzadestra(){
    digitalWrite(Trigdestra, LOW);
delayMicroseconds(2);
digitalWrite(Trigdestra, HIGH);
delayMicroseconds(10);
digitalWrite(Echodestra, LOW);
duration = pulseIn(Echodestra, HIGH);
cm = (duration / 2) / 29.1; // la formula per calcolare la distanza in centimetri
return distanzadestra;
} 
double calcoladistanzasinistra(){
    digitalWrite(Trigsinistra, LOW);
delayMicroseconds(2);
digitalWrite(Trigsinistra, HIGH);
delayMicroseconds(10);
digitalWrite(Echosininstra, LOW);
duration = pulseIn(Echosininstra, HIGH);
cm = (duration / 2) / 29.1; // la formula per calcolare la distanza in centimetri
return distanzasinistra;
} 

void loop() {
   calcoladistanzaavanti();
   calcoladistanzasinistra();
   calcoladistanzadestra();
  if (distanzaL<=distanzaavanti)
  {

    evitamuro();
      }
  if(bianco!=sensorecolorecentale)
  {
    
  }
  
  
  
}
  
  
}