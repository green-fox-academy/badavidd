#include <stdio.h>

int main() {
// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

    double a;
    double b;
    double c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("%lf, %lf, %lf\n", a, b, c);
    double surface = ((a * b) + (b * c) + (a * c)) * 2;
    double volume = a * b *c;
    printf("Surface Area: %.lf\n", surface);
    printf("Volume: %.lf\n", volume);

    return 0;
}