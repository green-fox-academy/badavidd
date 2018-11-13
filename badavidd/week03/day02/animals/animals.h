//
// Created by Dávid on 2018. 11. 13..
//

#ifndef ANIMALS_ANIMALS_H
#define ANIMALS_ANIMALS_H

#include <iostream>

class Animals {

public:
    Animals(int hunger = 50, int thirst = 50);

    int getHunger();

    int getThirst();

    void eat();

    void drink();

    void play();

private:
    int _hunger;
    int _thirst;
};


#endif //ANIMALS_ANIMALS_H
