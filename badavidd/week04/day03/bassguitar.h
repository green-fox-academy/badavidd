#ifndef DAY03_BASSGUITAR_H
#define DAY03_BASSGUITAR_H

#include "stringedinstument.h"

class BassGuitar : public Stringedinstument {
public:
    BassGuitar();

    BassGuitar(int numberOfStrings);

    std::string sound() override;
};

#endif