#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int a = 0;
    int b = 1;

    std::cout << "Give me two numbers, pls!" << std::endl;
    std::cin >> a;
    std::cin >> b;
    if (a == b)
    std::cout << "They are equal!" << std::endl;

    else {
        if (a <= b) {
            std::cout << b << std::endl;
        } else {
            std::cout << a << std::endl;
        }
    }

    return 0;}