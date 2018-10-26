#include <iostream>

int main(int argc, char* args[]) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    int codinghours = 6;
    int weeks = 17;
    float avgworkhours = 52;

        std::cout << codinghours * weeks * 5 << std::endl;
        std::cout << (codinghours * weeks * 5) / (avgworkhours * weeks) * 100;
        std::cout << "%" << std::endl;

    return 0;
}