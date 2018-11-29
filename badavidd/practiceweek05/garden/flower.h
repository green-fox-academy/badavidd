#ifndef GARDEN_FLOWER_H
#define GARDEN_FLOWER_H

#include "plant.h"

class Flower : public Plant {
public:
    Flower(std::string color, int waterLVL);

    float getWaterLVL() override;

    bool isNeedWater() override;

    void water(int givenWater) override;

    std::string getType();
};

#endif