int relayPin = 7;
int analogPin = A0;
int output;
int ledPin = 13;

void setup() {
 pinMode(ledPin, OUTPUT); 
pinMode(relayPin, OUTPUT);
pinMode(analogPin, INPUT);
Serial.begin(9600);
  Serial.println ("Reading From the Sensor ...");
  delay(2000);
}


void loop() {
int sensorRead = analogRead(analogPin);
sensorRead = map(sensorRead,0,550,0,100);
Serial.print("sensor read: ");
Serial.print(sensorRead);
if(sensorRead >= 80){
  digitalWrite(relayPin, LOW);
  digitalWrite(ledPin, HIGH);

}else{
  digitalWrite(relayPin, HIGH);
  digitalWrite(ledPin, LOW);
}

delay(1000);

}
