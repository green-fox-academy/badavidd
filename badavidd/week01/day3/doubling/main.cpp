#include <iostream>
#include <string>

void doubling(int x);

int main(int argc, char* args[]) {

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`

    int baseNum = 123;

    doubling(baseNum);

    return 0;
}


void doubling(int x)
{
    std::cout << x * 2 << std::endl;
}