#include <Arduino.h>
#include <Arduino.h>
#include "HX711.h"

#define DOUT 25  // Daten-Pin
#define SCK 33    // Clock-Pin

HX711 scale;

void setup() {
    Serial.begin(115200);
    scale.begin(DOUT, SCK);
    Serial.println("Starte HX711...");
}

void loop() {
    if (scale.is_ready()) {
        long reading = scale.get_units();
        Serial.print("Messwert: ");
        Serial.println(reading);
    } else {
        Serial.println("HX711 nicht bereit.");
    }
    delay(500);
}

