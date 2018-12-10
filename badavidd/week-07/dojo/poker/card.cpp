#include "card.h"

Card::Card(Color color, Value value) {
    _color = color;
    _value = value;
}

Value Card::getValue() {
    return _value;
}

Color Card::getColor() {
    return _color;
}
