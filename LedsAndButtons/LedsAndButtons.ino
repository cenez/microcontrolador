const int IN7 = 7;
const int OUT10 = 10;
void btn_liga_desliga();
void btn_press_liga();
void setup(){
  pinMode(OUT10, OUTPUT);//10
  pinMode(IN7, INPUT);//7
  pinMode(LED_BUILTIN, OUTPUT);//ledplaca
}
void loop(){
  btn_liga_desliga();
  //btn_press_liga();
}

void btn_liga_desliga(){ // Ligar/desligar com botao
  if(digitalRead(IN7)){
    while(digitalRead(IN7)){ delay(50); }
    delay(50); 
    int status = digitalRead(OUT10);
    digitalWrite(OUT10, !status);
  }
}
void btn_press_liga(){ // Ligar com botao pressionado
  if(digitalRead(IN7)){
    digitalWrite(OUT10, HIGH);
    delay(100);
  }
  else {
    digitalWrite(OUT10, LOW);
  }
}
