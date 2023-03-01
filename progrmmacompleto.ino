#define sensorecolorecentale 10;
#define sensorecoloresinistra 12;
#define sensorecoloredestra 11;
int bianco = 1;
int nerto=0;
int verde=3;
int motori=200;

//min pin 1
//max pin 53
void setup() {
pin
}
void loop() {
  int red_level = readColor(0);
  if (red_level > 0) {
    Serial.print("Red: ");
    Serial.println(red_level);
  }
  delay(100);
}