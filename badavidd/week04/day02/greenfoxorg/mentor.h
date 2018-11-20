#ifndef DAY02_MENTOR_H
#define DAY02_MENTOR_H

#include "person.h"

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor(std::string name, int age, Gender gender, Level level);

    Mentor();

    std::string getLevel();

    void getGoal() override;

    void introduce() override;

protected:
    Level _level;
};

#endif