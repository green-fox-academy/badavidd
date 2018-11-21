#ifndef DEVICES_PRINTER_H
#define DEVICES_PRINTER_H

#include <iostream>

class Printer {
public:
    virtual void getSize() = 0;

    void print();
};

#endif