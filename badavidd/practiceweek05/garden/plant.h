#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H

#include <iostream>
#include <string>

class Plant {
public:
    virtual float getWaterLVL() = 0;

    virtual bool isNeedWater() = 0;

    virtual void water(int givenWater) = 0;

    virtual std::string getType() = 0;

protected:
    std::string _color;
    float _waterLVL;
};

#endif