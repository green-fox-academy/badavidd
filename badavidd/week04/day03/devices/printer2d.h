#ifndef DEVICES_PRINTER2D_H
#define DEVICES_PRINTER2D_H

#include "printer.h"

class Printer2d {
public:
    Printer2d(int sizeX, int sizeY);
    std::string getSize();

protected:
    int _sizeX;
    int _sizeY;
};


#endif