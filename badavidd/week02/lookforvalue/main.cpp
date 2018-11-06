#include <iostream>
#include <algorithm>

int givenValue(int array[], int length, int b);

int main() {
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return  where it found the given value
    // if it can't find the number return 0

    int a[6] = {1, 2, 3, 4, 5, 6};
    std::cout << givenValue(a, sizeof(a) / sizeof(a[0]), 4) << std::endl;

    return 0;
}

int givenValue(int array[], int length, int b) {
    for (int i = 0; i < length; i++) {
        if (b == array[i]) {
            return i;
        }
    }
    return 0;
}