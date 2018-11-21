#include "violin.h"

Violin::Violin() {
    _name = "Violin";
    _numberOfStrings = 4;
}

std::string Violin::sound() {
    return "Screech";
}