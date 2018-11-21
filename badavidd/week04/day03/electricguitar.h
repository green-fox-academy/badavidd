#ifndef DAY03_ELECTRICGUITAR_H
#define DAY03_ELECTRICGUITAR_H

#include "stringedinstument.h"

class ElectricGuitar : public Stringedinstument {
public:
    ElectricGuitar();

    ElectricGuitar(int numberOfStrings);

    std::string sound() override;
};

#endif