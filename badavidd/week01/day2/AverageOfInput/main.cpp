#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    float sum = 0;
    float avg = 0;
    std::cout << "Please give me 5 numbers!" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;
    sum = a + b + c + d + e;
    avg = sum / 5;
    std::cout << "Sum: " << sum << " Average: " << avg << std::endl;

    return 0;
}