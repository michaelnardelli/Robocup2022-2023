#include <Servo.h>
Servo myservo;

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

//min pin 1
//max pin 53

void setup() {
pinMode(sensorecolorecentale, INPUT);
pinMode(sensorecoloresinistra, INPUT);
pinMode(sensorecoloredestra, INPUT);

}
void loop() {
  if(sensorecolorecentale)
}