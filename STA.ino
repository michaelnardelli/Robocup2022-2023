


#define Trig 4
#define Echo 3
const int sensorPin = A0;

const int motore1= 2;
const int motore2 = 1;
const int motore1a= 2;
const int motore2a = 1;

  





long int durata;
float distanza;
void setup(){
 myservo.attach(3);  // attacca il servo alla pin 9
  pinMode(Echo, INPUT); 
  pinMode(Trig,OUTPUT);
  Serial.begin(9600);
  pinMode(motore1, OUTPUT);
  pinMode(motore1a, OUTPUT);
  pinMode(motore2, OUTPUT);
  pinMode(motore2a, OUTPUT);
  delay(100);
 

}
void loop(){
digitalWrite(Trig,0);
delayMicroseconds(10);
digitalWrite(Trig,1);
delayMicroseconds(10);
digitalWrite(Trig,0);
if (distanza<=20){
  

}
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
 
 
