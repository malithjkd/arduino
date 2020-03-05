/*  
    Project: IT FYP
    Vehical Mounted Device for globle positon, speed and deraction.
    Malithjkd 
    2020.01.24
*/

const int ledPin =  13;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(ledPin, OUTPUT);
  delay (5000);
  
  Serial1.println("AT+CGNSPWR = 1");
}
//end setup loop

void loop() {
  // read from port 1, send to port 0:
  if (Serial1.available()) {
    int inByte = Serial1.read();
    Serial.write(inByte);
  }
  // read from port 0, send to port 1:
  if (Serial.available()) {
    int inByte = Serial.read();
    Serial1.write(inByte);
  }
}
