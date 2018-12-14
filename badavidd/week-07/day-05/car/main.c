#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level



enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
    enum car_type type;
    double km;
    double gas;
};

void print_stats(struct Car* car)
{
    switch (car->type) {
        case TESLA:
            printf("Tesla with %f km range.\n", car->km);
            break;
        case VOLVO: printf("Volvo with %.f km range and %.f liters of gas.\n", car->km, car->gas);
            break;
        case TOYOTA: printf("Toyota with %.f km range and %.f liters of gas.\n", car->km, car->gas);
            break;
        case LAND_ROVER: printf("Land Rover with %.f km range and %.f liters of gas.\n", car->km, car->gas);
            break;
    }
}

int main()
{
    struct Car car0;
    car0.type = TESLA;
    car0.km = 800;

    struct Car car1;
    car1.type = VOLVO;
    car1.km = 400;
    car1.gas = 60;

    struct Car car2;
    car2.type = TOYOTA;
    car2.km = 1000;
    car2.gas = 80;

    struct Car car3;
    car3.type = LAND_ROVER;
    car3.km = 1200;
    car3.gas = 100;



    print_stats(&car0);
    print_stats(&car1);
    print_stats(&car2);
    print_stats(&car3);


    return 0;
}