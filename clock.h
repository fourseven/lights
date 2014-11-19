#ifndef CLOCK_H
#define CLOCK_H
#include <EEPROM24.h>
#include <I2CMaster.h>
#include <SoftI2C.h>
#include <RTC.h>
#include <DS3232RTC.h>


// #if (ARDUINO >= 100)
//  #include <Arduino.h>
// #else
//  #include <WProgram.h>
//  #include <pins_arduino.h>
// #endif

class Clock {
  public:
    static Clock& getInstance() {
      static Clock instance;
      return instance;
    }
    ~Clock() {};

    void setup();
  private:
    Clock() {};
    Clock(Clock const&);          // Don't Implement
    void operator=(Clock const&); // Don't implement
};

#endif
