#include <iostream>

int main() {

    int numList[5]{3, 4, 5, 6, 7};

    for(int i = 0; i < (sizeof(numList) / sizeof(numList[5])); i++)
        std::cout << numList[i] * 2 << std::endl;

    return 0;
}