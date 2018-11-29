#include "garden.h"

Garden::Garden() {

}

void Garden::water(int waterAmount) {
    int _needwater = 0;
    for (int i = 0; i < _plants.size(); i++) {
        if (_plants[i]->isNeedWater()) {
            _needwater++;
        }
    }
    for (int j = 0; j < _plants.size(); j++) {
        if (_plants[j]->isNeedWater()) {
            _plants[j]->water(waterAmount / _needwater);
        }
    }
}

void Garden::addPlant(Plant *plant) {
    _plants.push_back(plant);
}
