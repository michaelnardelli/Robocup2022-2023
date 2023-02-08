const int motore1= 2;
const int motore2 = 1;
const int motore1a= 2;
const int motore2a = 1;
const int enable
void setUp(){
    pinMode(motore1, OUTPUT);
  pinMode(motore1a, OUTPUT);
  pinMode(motore2, OUTPUT);
  pinMode(motore2a, OUTPUT);
}
void loop(){
    analoWrite(enable,255);
    digitalWrite(motore1, HIGH);
    digitalWrite(motore2, LOW);
    analoWrite(enable,255);
    digitalWrite(motore2, HIGH);
    digitalWrite(motore1, LOW);

}