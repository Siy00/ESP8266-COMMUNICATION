#include <SoftwareSerial.h>

SoftwareSerial Begginner2(3, 1); // RX, TX

void setup() {
  Serial.begin(9600);       
  Begginner2.begin(9600);     
}

void loop() {

  if (Serial.available() > 0) {

    char gelen = Serial.read();

    if (gelen == '1') {
      Begginner2.println("1");
    }
  }
}