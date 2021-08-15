
int pirSensor = 11;
int relayInput = 6;
void setup() {
  pinMode(pirSensor, INPUT);
  pinMode(relayInput, OUTPUT);
  digitalWrite(relayInput, LOW);
  Serial.begin(9600);
}
void loop() {
  int sensorValue = digitalRead(pirSensor);
 
  if (sensorValue == 1) {
    digitalWrite(relayInput, HIGH);
    Serial.println("obstacle present");
  }
  else{
    digitalWrite(relayInput, LOW);
      }
}
