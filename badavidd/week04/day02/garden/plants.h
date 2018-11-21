#ifndef GARDEN_PLANTS_H
#define GARDEN_PLANTS_H

#include <iostream>

class Plants {
public:
    Plants();

    virtual bool needWater();

protected:
    std::string _color;
    int _waterLevel;

};

#endif