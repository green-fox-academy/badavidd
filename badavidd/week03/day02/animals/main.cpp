#include <iostream>
#include "animals.h"

int main() {

    Animals animals;
    for(int i = 0; i < 10; i++) {
        animals.play();
    }
    animals.eat();
    animals.drink();
    std::cout << "Hunger: " << animals.getHunger() << " Thirst: " << animals.getThirst();
    return 0;
}