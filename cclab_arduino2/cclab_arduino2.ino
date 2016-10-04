
const int analogInPin = A0;  
const int analogOutPin = 9; 


int sensorValue = 0;        
int outputValue = 0;        

void setup() {
  Serial.begin(9600);
  pinMode(analogInPin,INPUT);
  pinMode(analogOutPin,OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  //LED 
  analogWrite(analogOutPin, outputValue);
  delay(200);
}

