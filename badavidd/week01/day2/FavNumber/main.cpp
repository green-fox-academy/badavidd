#include <iostream>

int main(int argc, char* args[]) {

    // Store your favorite number in a variable (as an integer)
    // And print it like this: "My favorite number is: 8"

    int favnum = 0;
    std::cout << "What is your favorite number?" << std::endl;
    std::cin >> favnum;
    std::cout << "My favorite number is: ";
    std::cout << favnum;


    return 0;
}