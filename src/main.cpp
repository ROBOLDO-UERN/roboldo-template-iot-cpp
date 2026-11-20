#include <Arduino.h>
#include "config.h"

void setup() {
    Serial.begin(115200);
    Serial.println("Roboldo IoT Firmware Template v" FIRMWARE_VERSION);
}

void loop() {
    delay(1000);
}
