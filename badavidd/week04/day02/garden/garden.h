#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include <vector>
#include "plants.h"
#include "flowers.h"
#include "trees.h"

class Garden {
public:
    Garden();
    void water(int givenWater);
    int getstate(std::vector<Plants *> plantsvector);

    void fillGarden(Plants * plants);

protected:
    std::vector<Plants *> _plantsvector;
    int _givenWater;
};


#endif