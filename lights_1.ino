#include <Adafruit_NeoPixel.h>
#include "hardware.h"
#include "clock.h"

Hardware &hardware = Hardware::getInstance();
Clock    &clock    = Clock::getInstance();

void setup() {
  hardware.setup();
  clock.setup();
}

void loop() {
  hardware.redLoop(50);
}
