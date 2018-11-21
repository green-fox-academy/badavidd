#ifndef ANIMALSINTHEZOO_ANIMAL_H
#define ANIMALSINTHEZOO_ANIMAL_H

#include <iostream>

enum class Gender {
    MALE,
    FEMALE
};
enum class Breed {
    LAYING_EGGS,
    PUSHING_OUT_MINIS,
};
enum class Size {
    BIG,
    MEDIUM,
    SMALL
};

class Animal {
public:
    virtual std::string getName() = 0;

    virtual std::string breed() = 0;

    virtual std::string getSize() = 0;

    virtual std::string getGender() = 0;

protected:
    std::string _name;
    int _age;
    Gender _gender;
    Breed _breed;
    Size _size;
};

#endif