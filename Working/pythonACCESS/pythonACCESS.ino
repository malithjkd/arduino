int i;

String string1;
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);  
}
//end setup loop

void loop() {
  // read from port 1, send to port 0:
  Serial1.println("AT+CGNSINF");
  while (Serial1.available()) {
    string1 = Serial1.readString();
    Serial.println(string1);
  }
  delay (3000);
  string1="";
}
