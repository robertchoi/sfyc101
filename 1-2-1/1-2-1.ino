
#define LED 7


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);  
  delay(1000);                     
  digitalWrite(LED, LOW);   
  delay(1000);                       
}
