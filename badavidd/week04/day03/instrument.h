#ifndef DAY03_INSTRUMENT_H
#define DAY03_INSTRUMENT_H

#include <iostream>

class Instrument {
public:
    virtual void play() = 0;

protected:
    std::string _name;

};

#endif