#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int a[5] = {};
    int *aPtr = nullptr;

    for(int i = 0; i < 5; i++){
        std::cout << "Number pls!";
        std::cin >> a[i];
    }
    for(int j = 0; j < 5; j++){
        aPtr = &a[j];
        std::cout << *aPtr << " ";
    }
    return 0;
}