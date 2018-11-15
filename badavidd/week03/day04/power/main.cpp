#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int power(int base, int n)
{
    if(base > 0 && n > 1)
    {
        return base * power(base,n - 1);
    }
}

int main() {

    std::cout << power(2, 6);

    return 0;
}