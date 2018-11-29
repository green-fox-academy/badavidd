#ifndef DEVICES_COPIER_H
#define DEVICES_COPIER_H
#include "scanner.h"
#include "printer2d.h"
#include "printer.h"

class Copier : public Printer2d, public Scanner{
public:
    Copier(int x, int y, int speed);

    void copy();
};


#endif