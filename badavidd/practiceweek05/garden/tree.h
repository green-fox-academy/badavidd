#ifndef GARDEN_TREE_H
#define GARDEN_TREE_H
#include "plant.h"

class Tree : public Plant {
public:
    Tree(std::string color, int waterLVL);

    float getWaterLVL() override;

    bool isNeedWater() override;

    void water(int givenWater) override;

    std::string getType();
};

#endif