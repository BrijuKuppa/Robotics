
int motor1_pos=13; //White; IN1; OUT1
int motor1_neg=12; //Orange; IN2; OUT2

int motor2_pos=11; //Blue; IN3; OUT3
int motor2_neg=10; //Green; IN4; OUT4

void setup() {
  pinMode(motor1_pos, OUTPUT);
  pinMode(motor1_neg, OUTPUT);
  pinMode(motor2_pos, OUTPUT);
  pinMode(motor2_neg, OUTPUT);
}

void loop() {
  digitalWrite(motor1_pos, 1);
  digitalWrite(motor1_neg, 0);
  digitalWrite(motor2_pos, 1);
  digitalWrite(motor2_neg, 0);
  delay(2000);
  digitalWrite(motor1_pos, 0);
  digitalWrite(motor1_neg, 1);
  digitalWrite(motor2_pos, 0);
  digitalWrite(motor2_neg, 1);
  delay(2000);
  digitalWrite(motor1_pos, 0);
  digitalWrite(motor1_neg, 0);
  digitalWrite(motor2_pos, 1);
  digitalWrite(motor2_neg, 0);
  delay(2000);
  digitalWrite(motor1_pos, 0);
  digitalWrite(motor1_neg, 1);
  digitalWrite(motor2_pos, 0);
  digitalWrite(motor2_neg, 0);
  delay(2000);
}
