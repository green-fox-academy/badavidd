#ifndef DOJO_CARD_H
#define DOJO_CARD_H

#include <string>
#include <vector>
#include <iostream>
enum class Color {
    C, D, H, S
};

enum class Value {
    Val_2 = 2, Val_3 = 3, Val_4 = 4, Val_5 =  5, Val_6 =  6, Val_7 =  7, Val_8 =  8, Val_9 =  9, Val_10 =  10, Val_J = 11, Val_Q = 12, Val_K = 13, Val_A = 14
};

class Card {
public:
    Card(Color color, Value value);
    Value getValue();
    Color getColor();

private:
    Color _color;
    Value _value;
};

#endif