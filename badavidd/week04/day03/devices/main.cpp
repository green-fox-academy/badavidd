#include <iostream>
#include "scanner.h"
#include "printer2d.h"
int main() {
    Scanner scanner(20);
    scanner.scan();
    Printer2d printer2d(3, 4);
    std::cout << printer2d.getSize() << std::endl;
    return 0;
}