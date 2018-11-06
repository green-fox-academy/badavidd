#include <iostream>

void askNumber(int &num);
void fillArray(int *array, int length);
void findBiggest(int array[], int length, int &biggest);

int main()
{
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality

    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int howLong = 0;
    int arr[100];
    int biggest = 0;
    int *biggestPtr = nullptr;
    askNumber(howLong);
    fillArray(arr, howLong);
    findBiggest(arr, howLong, biggest);
    biggestPtr = &biggest;
    std::cout << biggestPtr << " " << *biggestPtr << std::endl;
    return 0;
}

void askNumber(int &num)
{
    std::cout << "How many elements do you want in your array?";
    std::cin >> num;
}
void fillArray(int *array, int length)
{
    for(int i = 0; i < length; i++){
        std::cout << "Gimme number!";
        std::cin >> array[i];
    }
}

void findBiggest(int array[], int length, int &biggest)
{
    for(int j = 0; j < length; j++){
        if(array[j] > biggest){
            biggest = array[j];
        }
    }

}