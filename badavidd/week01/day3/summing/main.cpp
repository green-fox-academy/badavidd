#include <iostream>
#include <string>

int sum(int number) {
    int sum = 0;
    for (int i = 0; i < number; i++)
        sum += i;
    return sum;
}
int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer

int baseNum = 10;
std::cout << sum(baseNum) << std::endl;

    return 0;
}
