#include <iostream>

int main() {

    int p1[]{1, 2, 3};
    int p2[]{4, 5};

    if(sizeof(p2) > sizeof(p1)){
        std::cout << "p2 has more elements" << std::endl;
    } else {
        std::cout << "p1 has more elements" << std::endl;
    }

    return 0;
}