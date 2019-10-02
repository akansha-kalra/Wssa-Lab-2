#define LED_R 6
#define LED_G 7
#define LED_B 8
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_R, OUTPUT); 
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  digitalWrite(LED_G, LOW);   
  digitalWrite(LED_B, LOW); 

}

// the loop function runs over and over again forever and write to it
void loop() {
  digitalWrite(LED_R, HIGH);    
  delay(250);                       // wait for a second
  digitalWrite(LED_R, LOW);   
  delay(250);                       // wait for a second
}
