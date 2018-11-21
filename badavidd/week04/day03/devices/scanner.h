#ifndef DEVICES_SCANNER_H
#define DEVICES_SCANNER_H

#include <iostream>

class Scanner {
public:
    Scanner(int speed);

    void scan();

private:
    int _speed;
};

#endif