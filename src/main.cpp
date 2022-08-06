#include <Arduino.h>

#define PAUSE_mS 1000

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(PAUSE_mS);
  digitalWrite(LED_BUILTIN, LOW);
  delay(PAUSE_mS / 4);
}
