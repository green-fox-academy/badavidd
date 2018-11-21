#ifndef DAY03_STRINGEDINSTUMENT_H
#define DAY03_STRINGEDINSTUMENT_H

#include "instrument.h"

class Stringedinstument : public Instrument {
public:
    virtual std::string sound() = 0;

    void play() override;

protected:
    int _numberOfStrings;
};

#endif