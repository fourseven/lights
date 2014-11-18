#include <Adafruit_NeoPixel.h>
#include "hardware.h"
#define PIN 9

Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  Hardware::getInstance().redLoop(strip, 50);
  // colorWipe(strip, strip.Color(255, 0, 0), 50); // Red
  // colorWipe(strip, strip.Color(0, 0, 0), 50); // Black
}
