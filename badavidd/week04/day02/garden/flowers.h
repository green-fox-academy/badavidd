#ifndef GARDEN_FLOWERS_H
#define GARDEN_FLOWERS_H

#include "plants.h"

class Flowers : public Plants {
public:
    Flowers(std::string color);

    bool needWater() override;

};

#endif
