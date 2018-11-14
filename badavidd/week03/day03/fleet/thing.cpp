//
// Created by Dávid on 2018. 11. 14..
//

#include "thing.h"

Thing::Thing(const std::string& name)
{
    _name = name;
    _completed = false;
}

void Thing::complete()
{
    _completed = true;
}

std::string Thing::toString()
{
    return (_completed ? "[x] " : "[ ] ") + _name;
}