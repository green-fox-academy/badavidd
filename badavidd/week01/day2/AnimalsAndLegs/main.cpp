#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int chicken = 0;
    int pig = 0;
    int legs = 0;

    std::cout << "Dear Farmer, tell me the number of chickens you own?" << std::endl;
    std::cin >> chicken;
    std::cout << "And how many pigs do you have?" << std::endl;
    std::cin >> pig;
    legs = chicken * 2 + pig * 4;
    std::cout << legs << std::endl;
    return 0;
}