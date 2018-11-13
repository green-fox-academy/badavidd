//
// Created by Dávid on 2018. 11. 13..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>

class Counter {

private:
    int _number;
    int _initialNumber;
public:
    Counter();
    Counter(int number);
    void add();
    void add(int number);
    int get();
    void reset();

};


#endif //COUNTER_COUNTER_H
