#ifndef DAY02_SPONSOR_H
#define DAY02_SPONSOR_H

#include "person.h"

class Sponsor : public Person {
public:
    Sponsor(std::string name, int age, Gender gender, std::string company);

    Sponsor();

    void introduce() override;

    void getGoal() override;

    void hire();

private:
    std::string _company;
    int _hiredStudents;
};


#endif