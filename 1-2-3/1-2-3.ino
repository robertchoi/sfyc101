
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {

  Serial.print("Hello ");
  Serial.println("Arduino World");
  delay(1000);        
}
