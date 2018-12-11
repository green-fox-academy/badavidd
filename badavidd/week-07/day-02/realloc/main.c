#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int x;
    printf("Give me the size of the array!");
    scanf("%d", &x);

    int* array = malloc(x * sizeof(int));
    printf("Give me %d numbers", x);
    for (int i = 0; i < x; ++i) {
        scanf("%d", &array[i]);
    }
    int y = 0;
    for (int i = 0; i < x; ++i) {
        y += array[i];
    }
    array = realloc(array, y * sizeof(int));
    for (int i = 0; i < y; ++i) {
        array[i] = i + 1;
        printf("num: %d\n", array[i]);
    }
    return 0;
}
