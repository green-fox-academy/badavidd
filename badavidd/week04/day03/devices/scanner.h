#ifndef DEVICES_SCANNER_H
#define DEVICES_SCANNER_H
#include <iostream>
#include <vector>

class Scanner {
public:
    Scanner(int speed);

    void scan();

    int getSpeed();

protected:
    int _speed;
};

#endif