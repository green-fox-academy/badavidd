#ifndef GARDEN_TREES_H
#define GARDEN_TREES_H

#include <iostream>

class Plants;
class Trees : public Plants {
public:
    Trees(std::string color, int waterLevel);
    void needWater();

};

#endif