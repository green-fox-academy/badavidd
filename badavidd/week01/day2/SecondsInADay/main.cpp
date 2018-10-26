#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int a = 0;
    int b = 0;
    int c = 0;
    a = (24 - currentHours - 1) * 60 *60;
    b = (60 - currentMinutes - 1) * 60;
    c = 60-currentSeconds;
    std::cout << a + b + c << std::endl;

    return 0;
}