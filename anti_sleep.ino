#include <Arduino.h>

const int MIC_PIN = A0;
const int LED_PIN = 13;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int micValue = analogRead(MIC_PIN);
    if (micValue < 50) {
        digitalWrite(LED_PIN, HIGH);
        Serial.println("Sleeping");
    } else {
        digitalWrite(LED_PIN, LOW);
        Serial.println("Awake");
    }
}
