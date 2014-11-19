#include "hardware.h"

Adafruit_NeoPixel Hardware::strip = (60, PIN, NEO_GRB + NEO_KHZ800);

Hardware::Hardware() {
}

void Hardware::setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void Hardware::redLoop(uint8_t wait) {
  colorWipe(strip.Color(255, 0, 0), wait);
  strip.clear();
  strip.show();
  delay(wait);
}

// Fill the dots one after the other with a color
void Hardware::colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}
