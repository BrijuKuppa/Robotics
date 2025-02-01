
#include <cvzone.h>

SerialData serialData;
int ldr=A0;
int ldrvalue;
int sendVals[2]; // Array of values to send

void setup() {
  pinMode(ldr,INPUT);
  serialData.begin(9600);
}

void loop() {
  ldrvalue=analogRead(ldr);
  Serial.print("ldr value:");
  Serial.println(ldrvalue);
  sendVals[0] = ldrvalue;
  sendVals[1] = 100;
  serialData.Send(sendVals);
  delay(500);
}
