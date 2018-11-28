#include "aircraft.h"

Aircraft::Aircraft() {
    _type = Type(rand() % 2);
    _ammo = 0;

}

int Aircraft::getAmmo() {
    return _ammo;
}

std::string Aircraft::getType() {
    switch (_type) {
        case Type::F16:
            return "F16";
        case Type::F35:
            return "F35";
    }
}

std::string Aircraft::getStatus() {
    return "Type: " + getType() + ", Ammo: " + std::to_string(getAmmo()) + ", Base DMG: " + std::to_string(getBaseDMG())
           + ", All DMG: " + std::to_string(getBaseDMG() * getAmmo());
}

int Aircraft::getBaseDMG() {
    if (_type == Type::F35) {
        return 50;
    }
    return 30;
}

int Aircraft::fight() {
    int DMG = _ammo * getBaseDMG();
    return DMG;
}

int Aircraft::refill(int givenAmmo) {
    if (_type == Type::F35) {
        for (int i = givenAmmo; i > 0; i--) {
            if (_ammo < 12) {
                _ammo++;
                givenAmmo--;
            }
        }
    } else {
        for (int i = givenAmmo; i > 0; i--) {
            if (_ammo < 8) {
                _ammo++;
                givenAmmo--;
            }
        }
    }
    return givenAmmo;
}

bool Aircraft::isPriority() {
    if (_type == Type::F35) {
        return true;
    }
}
