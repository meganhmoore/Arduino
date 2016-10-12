const int potPin=A0;
const int ledPin=3;

int sensorVal;
int ledBright;

void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  sensorVal = analogRead(potPin); //read the sensor value and save it in a variable
  ledBright = sensorVal/4;        //divide by 4 to scale appropriately
  analogWrite(ledPin, ledBright); //PWM the LED
  delay(2);

}
