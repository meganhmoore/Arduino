int motorPin = 9;
int pinTest=13;

void setup() {
 pinMode(motorPin, OUTPUT);
 pinMode(pinTest,OUTPUT);
}
void loop() {
  digitalWrite(pinTest, HIGH);
 /*for (int i=0;i<250;i+=25){
    analogWrite(motorPin, i);
    delay(1000);
 }
 for (int i=250;i>0;i-=25){
    analogWrite(motorPin, i);
    delay(1000-i);
 }*/
 digitalWrite(motorPin, HIGH);
 delay(2000);
  
 digitalWrite(pinTest,LOW);
 
 digitalWrite(motorPin, LOW);
 delay(1000);
}
