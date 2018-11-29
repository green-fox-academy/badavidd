#include "scanner.h"

Scanner::Scanner(int speed) {
    _speed = speed;
}

void Scanner::scan() {
    std::cout << "I'm scanning a document " << getSpeed() << " ppm";
}

int Scanner::getSpeed() {
    return _speed;
}