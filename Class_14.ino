
int l=13;
int l2=12;
int btn=4;
int pir=6;
int btn_state=0;
int l_state=0;
int pir_state=0;

void setup() {
  pinMode(l, OUTPUT);
  pinMode(btn, INPUT);
  pinMode(pir, INPUT);
  pinMode(l2, OUTPUT);
}

void loop() {
  btn_state=digitalRead(btn);
  pir_state=digitalRead(pir);

  if (btn_state==1){
    l_state=!l_state;
    digitalWrite(l,l_state);
  }
  
  if (pir_state==1){
    digitalWrite(l2, 1);
    delay(3000);
  }

  else{
    digitalWrite(l2, 0);
  }
}