const int ledPin = 7;
const int potPin = A0;

int sensorVal;


void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int delayTime;
  sensorVal = analogRead(potPin);
  delayTime = sensorVal;
  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
  //Serial.println(sensorVal);
  //delay(2);
}

