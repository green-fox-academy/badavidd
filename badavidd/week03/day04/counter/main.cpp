#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

int counter(int num) {
    if (num >= 1) {
        std::cout << num << std::endl;
        return counter(num - 1);
    }
}

int main() {

    std::cout << counter(4) << std::endl;

    return 0;
}