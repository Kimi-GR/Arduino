const int tempPin = A0;  // the number of the switch pin
const int motorPin = 10;   // the number of the motor pin

int switchState = 0;  // variable for reading the switch's status

void setup() {
  // initialize the motor pin as an output:
  pinMode(motorPin, OUTPUT);
  // initialize the switch pin as an input:
  
  pinMode(4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // read the state of the switch value:
  int volt = analogRead(tempPin);
  float voltage = (volt/1024.0)*5.0;

  float temp = (voltage  - .5)*100;
  Serial.print(voltage);
  Serial.print("temp: ");
  Serial.print(temp);
  Serial.println("°C ");
  

  // check if the switch is pressed.
  if (temp >= 27.5 ) {
    // turn motor on:
    digitalWrite(motorPin, HIGH);
    digitalWrite(4,HIGH);
  } 
  else {
    // turn motor off:
    digitalWrite(motorPin, LOW);
    digitalWrite(4,LOW);
  }
  delay(10000);
}
