#include <Arduino.h>

#define pressureSensor 27 // Onboard LED (check your board's pin if this doesn't work)
//#define extLED 32

void setup() {
  pinMode(pressureSensor, INPUT);
  //pinMode(extLED, OUTPUT);
  Serial.begin(115200);
  Serial.println("Setup complete. Starting LED test...");
}

void loop() {
    double sensorData = analogRead(pressureSensor);
    Serial.print("Sensor Data:");
    Serial.println(sensorData);
    delay(1000);
}
