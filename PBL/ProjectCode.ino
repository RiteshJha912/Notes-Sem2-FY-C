int sensorPin = A0;
int relayPin = 8;

void setup() 
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
}
void loop() 
{
  int sensorValue = analogRead(sensorPin);
  if( sensorValue <= 25 )  // Change the value as per your requirement
  {
    digitalWrite(relayPin, LOW);
    Serial.println(sensorValue);
    delay(100);
  }
  else
  {
    digitalWrite(relayPin, HIGH);
    Serial.println(sensorValue);
  }
}
