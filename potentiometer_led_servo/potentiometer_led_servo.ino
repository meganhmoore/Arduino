#include <Servo.h>

Servo myServo;

int potPin=0;//potentiometer pin at analog 0
int ledPin=3;//led pin at digital 3
int piezoPin=8;//piezo pin at digital 8
byte names[] = {'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C'};//array of notes  
int tones[] = {1915, 1700, 1519, 1432, 1275, 1136, 1014, 956};//corresponding piezo values
byte melody[] = "2d2a1f2c2d2a2d2c2f2d2a2c2d2a1f2c2d2a2a2g2p8p8p8p";//melody
int count = 0;
int count2 = 0;
int count3 = 0;
int MAX_COUNT = 24;
int statePin = LOW;

int val;
int servoVal;

void setup() {
  myServo.attach(9);//servo attached to the 9 digital pin
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val=analogRead(potPin);//reads potentiometer val
  servoVal=map(val,0,1023,0,180);//maps to adjust pot value to servo val
  myServo.write(servoVal);//sets servo val
  digitalWrite(ledPin,HIGH);//sets led on if connected
  song();//plays song if connected
}
int song(){
  analogWrite(piezoPin, 0);
  for (count = 0; count < MAX_COUNT; count++) {
    statePin = !statePin;
    //digitalWrite(ledPin, statePin);
    for (count3 = 0; count3 <= (melody[count*2] - 48) * 30; count3++) {
      for (count2=0;count2<8;count2++) {
        if (names[count2] == melody[count*2 + 1]) {       
          analogWrite(piezoPin,500);
          delayMicroseconds(tones[count2]);
          analogWrite(piezoPin, 0);
          delayMicroseconds(tones[count2]);
        } 
        if (melody[count*2 + 1] == 'p') {
          // make a pause of a certain size
          analogWrite(piezoPin, 0);
          delayMicroseconds(5);
        }
      }
    }
  }
  return 0;
}


