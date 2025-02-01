#include <cvzone.h>
int trig=12;
int echo=13;
int vcc=11;
SerialData serialData;
int sendVals[2]; // Array of values to send

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(vcc, OUTPUT);
  digitalWrite(vcc, HIGH);
  serialData.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long duration=pulseIn(echo, HIGH);
  long distance=duration*0.034/2;
  int potVal1 = distance;
  int potVal2 = duration;
  sendVals[0] = potVal1;
  sendVals[1] = potVal2;
  
  serialData.Send(sendVals);
  delay(1000);
}
