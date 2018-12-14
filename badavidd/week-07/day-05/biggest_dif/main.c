#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// You will write a program that keeps track of exam results.
// First, your program should ask the user how many classes took the exam. Let's say this number is N.
// Then you need to ask how many students took the exam in the first class. Let's say this number is M.
// You need to ask for the name of the class, the the exam results in percentage M times and store them.
// The number of students might be different for each class.
// You need to repeat this N times.
// Make sure you have a separate function that reads the data and returns it.

// Once you have the data write functions for the following questions:
// Which class has the biggest difference between the worst and best exam and how much is the difference?
// Which class has the best exam?
// What is the average of all the exams?

void class_creation(int* student_count, int number_of_classes, char** class_names);
void free_all(int* student_count, char** class_names);

int main()
{
    int number_of_classes;
    printf("How many classes took the exam?");
    scanf("%d", &number_of_classes);
    int* student_count = (int*) malloc(number_of_classes * sizeof(int));
    char** class_names = (char**) malloc(number_of_classes * sizeof(char*));

    class_creation(student_count, number_of_classes, class_names);

    for (int i = 0; i < number_of_classes; ++i) {
        printf("Name: %s\n", *class_names);
    }

    free_all(student_count, class_names);
    return 0;
}

void class_creation(int* student_count, int number_of_classes, char** class_names)
{
    for (int i = 0; i < number_of_classes; ++i) {
        char name[100];
        printf("What is the name of the class?\n");
        scanf("%s", name);
        name[i] = (char*) malloc(strlen(name) * sizeof(char));
        strcpy(class_names[i], name);
        printf("How many students took the exam?");
        scanf("%d", &student_count[i]);
    }
}

void free_all(int *student_count, char** class_names) {
    free(student_count);
    free(class_names);
}

