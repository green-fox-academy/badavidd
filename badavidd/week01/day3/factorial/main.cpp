#include <iostream>
#include <string>

int factorio(int number);

int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   that returns it's input's factorial

int num = 4;
std::cout << factorio(num) << std::endl;

    return 0;
}
int factorio(int number) {
    int fac = 1;
    for (int i = 1; i <= number; ++i) {
        fac *= i;
    }
    return fac;
}