#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(5000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(5000);
}