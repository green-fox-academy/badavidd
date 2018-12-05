#include<stdio.h>

int main()
{
    // Modify this program to greet you instead of the World!
    printf("Hello, David!\n");

    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the informations!

    char* name = "David";
    int age = 26;
    float height = 1.86;
    printf("%s %d %.2f", name, age, height);



    return 0;
}