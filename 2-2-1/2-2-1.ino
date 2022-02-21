int pushButton = 2;
int motorControl = 9;

void setup(){
  pinMode(pushButton, INPUT);
  pinMode(motorControl, OUTPUT);
  Serial.begin(115200);
}

void loop(){
  int ipush = digitalRead(pushButton);

  Serial.println(ipush);

  if(digitalRead(pushButton) == HIGH) {
    digitalWrite(motorControl, HIGH);
  }
  else {
    digitalWrite(motorControl, LOW);
  }
  delay(1000);
}
