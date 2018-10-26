#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    int km = 0;
    double mile = 1.609344;
    double distance = 0;
    std::cout << "How far do you live from Green Fox Academy in kilometers?" << std::endl;
    std::cin >> km;
    distance = km * mile;
    std::cout << "You live " << distance << " miles from Green Fox Academy." << std::endl;

    return 0;
}