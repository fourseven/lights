#include "hardware.h"

void Hardware::redLoop(Adafruit_NeoPixel &strip, uint8_t wait) {
  colorWipe(strip, strip.Color(255, 0, 0), wait);
  strip.clear();
  strip.show();
  delay(wait);
}

// Fill the dots one after the other with a color
void Hardware::colorWipe(Adafruit_NeoPixel &strip, uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}
