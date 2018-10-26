#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int a = 0;

    std::cout << "Give me a number, plssss!" << std::endl;
    std::cin >> a;
    if (a % 2 == 1){
        std::cout << "Odd" << std::endl;
    }   else {
            std::cout << "Even" << std::endl;
    }

    return 0;
}