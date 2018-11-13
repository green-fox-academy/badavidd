#include <iostream>
#include "counter.h"


int main() {

    Counter counter;
    Counter counter1(10);
    counter1.add();
    std::cout << counter1.get() << std::endl;
    counter.add();
    std::cout << counter.get() << std::endl;
    counter1.add(5);
    counter.add(3);
    std::cout << counter1.get() << " " << counter.get() << std::endl;
    counter.reset();
    counter1.reset();
    std::cout << counter1.get() << " " << counter.get() << std::endl;
    return 0;
}