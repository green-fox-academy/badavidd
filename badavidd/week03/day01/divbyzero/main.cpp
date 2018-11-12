#include <iostream>
#include <fstream>
#include <exception>

std::string div10(int number);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    try {
        int x = 10;
        int y = 0;
        if (y == 0) {
            throw std::string ("Can't div by zero");
        }
        std::cout << x / y << std::endl;
    } catch (std::string &e) {
        std::cout << e << std::endl;
    }

    return 0;
}