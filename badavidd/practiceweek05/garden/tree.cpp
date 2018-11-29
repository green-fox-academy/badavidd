#include "tree.h"

Tree::Tree(std::string color, int waterLVL) {
    _color = color;
    _waterLVL = waterLVL;
}

float Tree::getWaterLVL() {
    return _waterLVL;
}

bool Tree::isNeedWater() {
    return _waterLVL < 10;
}

void Tree::water(int givenWater) {
    _waterLVL += givenWater * 0.4;
}

std::string Tree::getType() {
    return "Tree";
}

