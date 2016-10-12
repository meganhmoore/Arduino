int piezoPin = 8; 
int ldrPin = 0; 
int ldrValue = 0; 
int ledPin=7;
int outputValue=0;

void setup()
{ 
  Serial.begin(9600);
}
void loop() 
{ 
   ldrValue = analogRead(ldrPin); 
   outputValue=map(ldrValue,0,1023,0,255);
   analogWrite(ledPin,outputValue);
   tone(piezoPin,1000); 
   delay(25); 
   noTone(piezoPin); 
   delay(ldrValue); // wait the amount of milliseconds in ldrValue

  Serial.print("sensor = ");
  Serial.print(ldrValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  delay(ldrValue);
} // End of cycle functions 

