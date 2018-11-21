#ifndef GARDEN_TREES_H
#define GARDEN_TREES_H

#include "plants.h"

class Trees : public Plants {
public:
    Trees(std::string color);

    bool needWater() override;

};

#endif