void setup() {
    for(int x=0;x<=2;x++){
      pinMode(x+2,INPUT_PULLUP);
    }
}

void loop() {
  if(digitalRead(2) == LOW){
    tone(8, 494, 20);
  }
  else if(digitalRead(3) == LOW){
    tone(8, 300, 20);    
  }
  else if(digitalRead(4) == LOW){
    tone(8, 131, 20);
  }else{
    noTone(8);
  }

}
