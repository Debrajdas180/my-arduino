#define ledPin 7
#include<SoftwareSerial.h>
SoftwareSerial mySerial(0,1);//RX,TX
int state = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 }
 if (state == '0') {
  digitalWrite(ledPin, LOW); // Turn LED OFF
  Serial.println("LED: OFF"); // Send back, to the phone, the String "LED: ON"
 }
 else if (state=='1') { 
  digitalWrite(ledPin, HIGH);
  Serial.println("LED: ON");
 } 
}
