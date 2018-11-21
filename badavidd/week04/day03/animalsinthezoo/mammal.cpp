#include "mammal.h"

Mammal::Mammal(std::string name, Breed breed, Size size, Gender gender) {
_name = name;
_breed = breed;
_size = size;
_gender = gender;
}

std::string Mammal::getName() {
    return _name;
}

std::string Mammal::breed() {
    switch(_breed)
    {
        case Breed::PUSHING_OUT_MINIS:
            return "Pushing out minis";
        case Breed::LAYING_EGGS:
            return "Laying eggs";
        default:
            return "Unknown";
    }
}

std::string Mammal::getSize() {
    switch(_size)
    {
        case Size::BIG:
            return "Big";
        case Size::MEDIUM:
            return "Medium";
        case Size::SMALL:
            return "Small";
        default:
            return "Unknown";
    }
}

std::string Mammal::getGender() {
    switch(_gender)
    {
        case Gender::MALE:
            return "Male";
        case Gender::FEMALE:
            return "Female";
        default:
            return "Unknown";
    }
}
