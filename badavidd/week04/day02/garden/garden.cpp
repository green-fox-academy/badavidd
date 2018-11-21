#include "garden.h"

void Garden::water(int givenWater) {
    _givenWater = givenWater / getstate(_plantsvector);
    //std::cout << _givenWater << std::endl;
    for(int j = 0; j < _plantsvector.size(); j++){
        if(_plantsvector[j]->needWater()){
            _plantsvector[j]
        }
    }
}

void Garden::fillGarden(Plants *plants) {
    _plantsvector.push_back(plants);
}

Garden::Garden() {

}

int Garden::getstate(std::vector<Plants *> plantsvector) {
    int counter = 0;
    for (int i = 0; i < plantsvector.size(); i++) {
        if (plantsvector[i]->needWater()) {
            counter++;
        }
    }
    return counter;
}

