#ifndef DAY03_VIOLIN_H
#define DAY03_VIOLIN_H

#include "stringedinstument.h"

class Violin : public Stringedinstument {
public:
    Violin();

    std::string sound() override;
};

#endif