void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  int RED = analogRead(A0);
  int BLUE = analogRead(A1);
  int GREEN = analogRead(A2);
  analogWrite (11, RED/4);
  analogWrite (10,BLUE/4);
  analogWrite(9,GREEN/4);
  // put your main code here, to run repeatedly:

}
