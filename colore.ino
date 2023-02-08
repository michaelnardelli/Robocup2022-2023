int S0 = 8;
int S1 = 9;
int S2 = 10;
int S3 = 11;
int OUT = 7;

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

int readColor(int color) {
  int frequency = 0;
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  if (color == 0) {
    digitalWrite(S2, HIGH);
    digitalWrite(S3, HIGH);
  }
  frequency = pulseIn(OUT, LOW);
  return frequency;
}
