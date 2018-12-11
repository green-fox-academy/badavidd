#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main() {
    int size = 10;
    int *first;
    int *second;
    first = malloc(size * sizeof(int));
    second = malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
        first[i] = i * 2 + 2;
        second[i] = i * 2 + 1;
    }

    first = (int *) realloc(first, 2 * size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        first[i + size] = second[i];
    }

    for (int i = 0; i < size * 2; ++i) {
        for (int j = i; j < size * 2; ++j) {
            if (first[i] < first[j]) {
                int swap = first[i];
                first[i] = first[j];
                first[j] = swap;
            }
        }
    }

    for (int i = 0; i < size * 2; ++i) {
        printf("first: %d\n", first[i]);
    }

    return 0;
}