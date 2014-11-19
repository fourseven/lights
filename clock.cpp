#include "clock.h"

#include <SoftI2C.h> // initialise required libraries
#include <DS3232RTC.h>
#if (ARDUINO >= 100)
 #include <Arduino.h>
#else
 #include <WProgram.h>
 #include <pins_arduino.h>
#endif

SoftI2C i2c(A4, A5); // assign pins to SDA and SCL
DS3232RTC rtc(i2c);

void Clock::setup() {

}
