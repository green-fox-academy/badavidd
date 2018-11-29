#include <iostream>
#include "printer2d.h"
#include "printer3d.h"
#include "scanner.h"
#include "copier.h"

int main() {

    Printer2d printer2d1(3, 4);
    Printer2d printer2d2(1, 2);
    Printer2d printer2d3(2, 3);
    Printer3d printer3d1(3, 4, 5);
    Printer3d printer3d2(7, 8, 9);
    Scanner scanner1(5);
    Scanner scanner2(6);
    Copier copier1(6, 7, 8);
    Copier copier2(1, 2, 3);

    std::vector<Printer* > printers;
    std::vector<Scanner*> scanners;

    printers.push_back(&printer2d1);
    printers.push_back(&printer2d2);
    printers.push_back(&printer2d3);
    printers.push_back(&printer3d1);
    printers.push_back(&printer3d2);

    for (int j = 0; j < printers.size(); ++j) {
        printers[j]->print();
    }

    scanners.push_back(&scanner1);
    scanners.push_back(&scanner2);
    scanners.push_back(&copier1);
    scanners.push_back(&copier2);
    for (int i = 0; i < scanners.size(); ++i) {
        scanners[i]->scan();
        std::cout << std::endl;
    }

    copier1.copy();

    return 0;
}