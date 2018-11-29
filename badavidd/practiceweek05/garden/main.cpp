#include <iostream>
#include "tree.h"
#include "flower.h"
#include "garden.h"

int main() {

    Tree tree1("blue", 5);
    Tree tree2("red", 1);
    Flower flower1("yellow", 3);
    Flower flower2("green", 0);
    Garden garden;

    garden.addPlant(&flower1);
    garden.addPlant(&tree1);
    garden.addPlant(&flower2);
    garden.addPlant(&tree2);

    garden.water(40);

    std::cout << tree1.getWaterLVL() << std::endl;
    std::cout << tree2.getWaterLVL() << std::endl;
    std::cout << flower1.getWaterLVL() << std::endl;
    std::cout << flower2.getWaterLVL() << std::endl;

    garden.water(20);

    std::cout << tree1.getWaterLVL() << std::endl;
    std::cout << tree2.getWaterLVL() << std::endl;

    return 0;
}