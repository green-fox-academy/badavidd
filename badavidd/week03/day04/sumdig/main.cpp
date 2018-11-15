#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int addNum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + addNum(n / 10);
    }
}

int main() {

    std::cout << addNum(12);

    return 0;
}