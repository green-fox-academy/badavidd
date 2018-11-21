#include "trees.h"
#include "plants.h"


Trees::Trees(std::string color, int waterLevel) {
_color = color;
_waterLevel = waterLevel;
}

void Trees::needWater() {
    if(_waterLevel < 10){
        std::cout << "The " << _color << " Tree needs water" << std::endl;
    }
}
