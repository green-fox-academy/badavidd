#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

int ears(int n)
{
    if(n > 0) {
        if(n % 2 == 0){
            return 2 + ears(n - 1) + 1;
        } else {
            return 2 + ears(n - 1);
        }
    } else {
        return 0;
    }
}

int main() {

    std::cout << ears(7);

    return 0;
}