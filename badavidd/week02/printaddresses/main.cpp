#include <iostream>
#include <vector>
int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int a[5] = {};
    int *aPtr = nullptr;
    for (int i = 0; i < 5; i++){
        std::cout << "Gimme a number! ";
        std::cin >> a[i];
    }

    for (int j = 0; j < 5; j++){
        aPtr = &a[j];
        std::cout << aPtr << std::endl;
    }
    return 0;
}