#include <cvzone.h>

int b=13;
int r=12;

SerialData serialData(2, 1); //(numOfValsRec,digitsPerValRec)
int valsRec[2]; // array of int with size numOfValsRec 

void setup() {
  pinMode(b, OUTPUT);
  pinMode(r, OUTPUT);
  serialData.begin();
}

void loop() {
  serialData.Get(valsRec);

  if (valsRec[0]==1){
    digitalWrite(r, 1);
  }

  else if (valsRec[0]==0){
    digitalWrite(r, 0);
  }

  else if (valsRec[0]==2){
    digitalWrite(b, 1);
  }

  else if (valsRec[0]==3){
    digitalWrite(b, 0);
  }
}
