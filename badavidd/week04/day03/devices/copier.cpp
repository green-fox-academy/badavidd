#include "copier.h"

Copier::Copier(int x, int y, int speed) : Printer2d(x, y), Scanner(speed){
_sizeX = x;
_sizeY = y;
_speed = speed;
}

void Copier::copy() {
    scan(), std::cout << " and ", print();
}
