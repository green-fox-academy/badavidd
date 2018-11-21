#include <iostream>
#include "mammal.h"

int main(int argc, char *args[]) {
    // Reptile reptile("Crocodile");
    Mammal mammal("Koala", Breed::PUSHING_OUT_MINIS, Size::SMALL, Gender::MALE); // Breed::? - Size::? - Gender::?
    //  Bird bird("Parrot");

    std::cout << "How do you breed?" << std::endl;
    //   std::cout << "A " << reptile.getName() << " is breeding by " << reptile.breed() << std::endl;
    std::cout << "A " << mammal.getName() << " is breeding by " << mammal.breed() << " and it's size is "
              << mammal.getSize() << ". And this " << mammal.getName() << "'s gender is " << mammal.getGender() << "."
              << std::endl;
    //  std::cout << "A " << bird.getName() << " is breeding by " << bird.breed() << std::endl;
}