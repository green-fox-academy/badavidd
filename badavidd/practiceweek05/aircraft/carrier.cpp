#include "carrier.h"

Carrier::Carrier(int HP, int ammo) {
    _HP = HP;
    _ammoStore = ammo;
}

void Carrier::add(Aircraft *aircraft) {
    _aircrafts.push_back(aircraft);
}

int Carrier::getHP() {
    return _HP;
}

void Carrier::setHP(int DMG) {
    _HP -= DMG;
}


void Carrier::fill() {
    try {
        if (_ammoStore == 0) {
            throw "There is no ammo!";
        }
        for (int i = 0; i < _aircrafts.size(); i++) {
            if (_aircrafts[i]->isPriority()) {
                _ammoStore = _aircrafts[i]->refill(_ammoStore);
            }
        }
        for (int i = 0; i < _aircrafts.size(); ++i) {
            if (!_aircrafts[i]->isPriority()) {
                _ammoStore = _aircrafts[i]->refill(_ammoStore);
            }
        }
    } catch (char const *e) {
        std::cout << e << std::endl;
    }
}

int Carrier::getTotalDMG() {
    int totalDMG = 0;
    for (int i = 0; i < _aircrafts.size(); i++) {
        totalDMG += _aircrafts[i]->fight();
    }
    return totalDMG;
}

void Carrier::getStatus() {
    std::cout << "HP: " << _HP << ", Aircraft count: " << _aircrafts.size() << ", Ammo Storage: " << _ammoStore
              << ", Total DMG: " << getTotalDMG() << std::endl;
    std::cout << "Aircrafts:" << std::endl;
    for (int i = 0; i < _aircrafts.size(); i++) {
        std::cout << _aircrafts[i]->getStatus() << std::endl;
    }
}

void Carrier::fight(Carrier &carrier) {
    std::cout << "Fight!" << std::endl;
    for(int i = 0; i < _aircrafts.size(); i++) {
        carrier.setHP(_aircrafts[i]->fight());
    }
    if (carrier.getHP() <= 0) {
        std::cout << "It's dead Jim :(" << std::endl;
    }
}