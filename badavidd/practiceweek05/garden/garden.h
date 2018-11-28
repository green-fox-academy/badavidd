#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include <vector>
#include "plant.h"
#include "tree.h"
#include "flower.h"

class Garden {
public:
    Garden();

    void addPlant(Plant *plant);

    void water(int waterAmount);

    int needWater();



private:
    int _needwater = 0;

private:
    std::vector<Plant *> _plants;
};


#endif