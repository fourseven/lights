#ifndef CLOCK_H
#define CLOCK_H

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
