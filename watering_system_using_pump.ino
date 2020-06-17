
#define relayPin 4

void setup()
{
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);
}

void loop(){

  digitalWrite(relayPin,LOW); // low means on ?
  delay(500);
  digitalWrite(relayPin,HIGH);
  delay(500);

}
