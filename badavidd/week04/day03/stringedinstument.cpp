#include "stringedinstument.h"

void Stringedinstument::play() {
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}
