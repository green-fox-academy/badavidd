#include "mentor.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level) {
    _name = name;
    _age = age;
    _gender = gender;
    _level = level;
}

Mentor::Mentor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _level = Level::INTERMEDIATE;
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << " " << getLevel() << " mentor."
              << std::endl;
}

std::string Mentor::getLevel() {
    switch (_level) {
        case Level::JUNIOR:
            return "junior";
        case Level::INTERMEDIATE:
            return "intermediate";
        case Level::SENIOR:
            return "senior";
        default:
            return "Unknown";
    }
}
