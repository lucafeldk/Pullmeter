#include <Arduino.h>

#define LED 2  // Onboard LED (check your board's pin if this doesn't work)

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  Serial.println("Setup complete. Starting LED test...");
}

void loop() {
  Serial.println("Turning LED ON");
  digitalWrite(LED, HIGH);  // Turn LED on
  delay(1000);

  Serial.println("Turning LED OFF");
  digitalWrite(LED, LOW);   // Turn LED off
  delay(1000);
}
