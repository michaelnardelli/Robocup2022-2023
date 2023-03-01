int bianco = 1;
int neto=0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(OUT, INPUT);
  digitalWrite(S0, LOW);
  digitalWrite(S1, LOW);
}
void loop() {
  int red_level = readColor(0);
  if (red_level > 0) {
    Serial.print("Red: ");
    Serial.println(red_level);
  }
  delay(100);
}