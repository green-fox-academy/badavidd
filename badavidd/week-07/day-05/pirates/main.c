#include <stdio.h>
#include <mem.h>

/*
Create a struct that represents a pirate
It should store:
 - name
 - an int value which tells us if he/she has a wooden leg?
 - gold count
Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
Create a function that takes an array of pirates (and it's length) then returns the name of the
richest that has wooden leg
*/

struct Pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
};

char *richest_bastard(struct Pirate pirates[], int number_of_pirates) {
    int index = 0;
    for (int i = 0; i < number_of_pirates; ++i) {
        if (pirates[i].has_wooden_leg == 1 && pirates[i].gold_count >= pirates[index].gold_count) {
            index = i;
        }
    }
    return pirates[index].name;
}

int sum_gold(struct Pirate pirates[], int number_of_pirates) {
    int gold_count = 0;
    for (int i = 0; i < number_of_pirates; ++i) {
        gold_count += pirates[i].gold_count;
    }
    return gold_count;
}

float average_gold(struct Pirate pirates[], int number_of_pirates) {
    int gold_count = 0;
    for (int i = 0; i < number_of_pirates; ++i) {
        gold_count += pirates[i].gold_count;
    }
    return gold_count / number_of_pirates;
}

int main() {
    int number_of_pirates = 3;
    struct Pirate pirates[number_of_pirates];

    struct Pirate pirate1;
    strcpy(pirate1.name, "Jack");
    pirate1.has_wooden_leg = 0;
    pirate1.gold_count = 2;
    pirates[0] = pirate1;

    struct Pirate pirate2;
    strcpy(pirate1.name, "Lali");
    pirate2.has_wooden_leg = 1;
    pirate2.gold_count = 4;
    pirates[1] = pirate2;

    struct Pirate pirate3;
    strcpy(pirate1.name, "Bali");
    pirate3.has_wooden_leg = 1;
    pirate3.gold_count = 3;
    pirates[2] = pirate3;

    printf("Total gold: %d\n", sum_gold(pirates, number_of_pirates));
    printf("average gold: %.f\n", average_gold(pirates, number_of_pirates));
    printf("Richest bastard: %s\n", richest_bastard(pirates, number_of_pirates));

    return 0;
}