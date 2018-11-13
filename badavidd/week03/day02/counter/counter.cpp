//
// Created by Dávid on 2018. 11. 13..
//

#include "counter.h"

Counter::Counter() {
_number = 0;
_initialNumber = 0;
}

Counter::Counter(int number) {
_number = number;
_initialNumber = number;
}

void Counter::add() {
_number++;
}

void Counter::add(int number) {
_number += number;
}

int Counter::get() {
    return _number;
}

void Counter::reset() {
    _number = _initialNumber;
}
