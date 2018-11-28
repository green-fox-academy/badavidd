#ifndef AIRCRAFT_AIRCRAFT_H
#define AIRCRAFT_AIRCRAFT_H

#include <iostream>
#include <random>

enum class Type {
    F16,
    F35
};

class Aircraft {
public:
    Aircraft();

    int getAmmo();

    int getBaseDMG();

    std::string getType();

    std::string getStatus();

    int fight();

    int refill(int givenAmmo);

    bool isPriority();

private:
    int _ammo;
    Type _type;


};


#endif