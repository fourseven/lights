#ifndef HARDWARE_H
#define HARDWARE_H

#include <Adafruit_NeoPixel.h>

#define PIN 9

class Hardware {
  public:
    static Hardware& getInstance() {
      static Hardware instance;
      return instance;
    }
    ~Hardware() {};
    void setup();
    void redLoop(uint8_t wait);
  private:
    Hardware();
    Hardware(Hardware const&);       // Don't Implement

    static Adafruit_NeoPixel strip;

    void operator=(Hardware const&); // Don't implement
    void colorWipe(uint32_t c, uint8_t wait);
};

#endif
