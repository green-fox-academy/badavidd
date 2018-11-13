//
// Created by Dávid on 2018. 11. 13..
//

#include "animals.h"

Animals::Animals(int hunger, int thirst) {
    _thirst = thirst;
    _hunger = hunger;
}

void Animals::eat() {
    _hunger--;
}

void Animals::drink() {
    _thirst--;
}

void Animals::play() {
    _hunger++;
    _thirst++;
}

int Animals::getHunger() {
    return _hunger;
}

int Animals::getThirst() {
    return _thirst;
}
