#include <iostream>

int *minValue(int *array, int length);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    std::cout << *minValue(numbers, 7) << " " << minValue(numbers, 7) << std::endl;

    return 0;
}

int *minValue(int *array, int length){
    int min = array[0];
    int *minPtr = &min;
    for(int i = 0; i < length; i++){
        if(array[i] < min){
            min = array[i];
            minPtr = &array[i];
        }
    }
    return minPtr;
}