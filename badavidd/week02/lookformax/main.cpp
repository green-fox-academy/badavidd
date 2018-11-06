#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int howMany = 0;
    int input = 0;
    int biggest = 0;
    int *biggestPtr = nullptr;
    std::cout << "How many integers do you want?";
    std::cin >> howMany;
    int a[howMany] = {};
    for(int i = 0; i < howMany; i++){
        std::cout << "Give me an integer!" << std::endl;
        std::cin >> input;
        a[i] = input;
    }
    for(int j = 0; j < howMany; j++){
        if(a[j] > biggest){
            biggest = a[j];
        }
    }
    biggestPtr = &biggest;
    std::cout << biggestPtr << " " << *biggestPtr << std::endl;
    return 0;
}