#ifndef HARDWARE_H
#define HARDWARE_H

#if (ARDUINO >= 100)
 #include <Arduino.h>
#else
 #include <WProgram.h>
 #include <pins_arduino.h>
#endif

#include <Adafruit_NeoPixel.h>

class Hardware {
  public:
    static Hardware& getInstance() {
      static Hardware instance;
      return instance;
    }
    ~Hardware() {};
    void redLoop(Adafruit_NeoPixel &strip, uint8_t wait);
  private:
    Hardware() {};
    Hardware(Hardware const&);              // Don't Implement
    void operator=(Hardware const&); // Don't implement
    void colorWipe(Adafruit_NeoPixel &strip, uint32_t c, uint8_t wait);
};

#endif
