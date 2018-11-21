#include "electricguitar.h"

ElectricGuitar::ElectricGuitar() {
    _name = "Electric Guitar";
    _numberOfStrings = 6;
}

ElectricGuitar::ElectricGuitar(int numberOfStrings) {
    _name = "Electric Guitar";
    _numberOfStrings = numberOfStrings;
}

std::string ElectricGuitar::sound() {
    return "Twang";
}