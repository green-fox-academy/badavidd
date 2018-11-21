#ifndef ANIMALSINTHEZOO_MAMMAL_H
#define ANIMALSINTHEZOO_MAMMAL_H

#include "animal.h"

class Mammal : public Animal {
public:
    Mammal(std::string name, Breed breed, Size size, Gender gender);

    std::string getName() override;

    std::string breed() override;

    std::string getSize() override;

    std::string getGender() override;

};


#endif