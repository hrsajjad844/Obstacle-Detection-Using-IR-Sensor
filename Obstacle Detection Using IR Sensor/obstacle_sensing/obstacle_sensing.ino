int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
 
int led =10;
int sensorValue = 0;        // value read from the pot
 
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
 
void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  Serial.print("sensor = " );
  Serial.println(sensorValue);
 
  delay(200);
  
  if(sensorValue<80)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
