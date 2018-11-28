#ifndef AIRCRAFT_CARRIER_H
#define AIRCRAFT_CARRIER_H

#include <vector>
#include "aircraft.h"

class Carrier {
public:
    Carrier(int HP, int ammo);

    void add(Aircraft *aircraft);

    void fill();

    void getStatus();

    int getHP();

    void setHP(int DMG);

    int getTotalDMG();

    void fight(Carrier &carrier);

private:
    std::vector<Aircraft *> _aircrafts;
    int _ammoStore;
    int _HP;
};

#endif