#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H
#include <vector>
#include "tree.h"
#include "flower.h"

class Garden {
public:
    Garden();

    void addPlant(Plant *plant);

    void water(int waterAmount);

private:
    std::vector<Plant *> _plants;
};

#endif