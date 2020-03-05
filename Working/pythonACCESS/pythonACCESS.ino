

int i;
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  
  Serial1.println("AT+CGNSINF");
}
//end setup loop

void loop() {
  // read from port 1, send to port 0:
  if (Serial1.available()) {
    int inByte = Serial1.read();
    Serial.write(inByte);
  }
   
}
