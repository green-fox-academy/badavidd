#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int ears(int n) {
    if (n > 0) {
        return 2 + ears(n - 1);
    } else {
        return 0;
    }

}

int main() {

    std::cout << ears(10);

    return 0;
}