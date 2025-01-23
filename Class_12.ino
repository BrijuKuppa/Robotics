int y=13;
int b=12;
int r=11;

void setup() {
  pinMode(y, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(r, OUTPUT);
}

void loop() {
  digitalWrite(y, 1);
  digitalWrite(b, 0);
  digitalWrite(r, 0);
  delay(1000);
  digitalWrite(y, 0);
  digitalWrite(b, 1);
  digitalWrite(r, 0);
  delay(1000);
  digitalWrite(y, 0);
  digitalWrite(b, 0);
  digitalWrite(r, 1);
  delay(1000);

}
