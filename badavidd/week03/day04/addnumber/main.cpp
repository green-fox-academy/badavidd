#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int addNum(int num) {
    if (num == 0) {
        return 0;
    } else {
        return num + addNum(num - 1);
    }
}

int main() {

    std::cout << addNum(6) << std::endl;

    return 0;
}