#include <iostream>
#include "garden.h"
#include "plants.h"
#include "trees.h"
#include "flowers.h"

int main() {

    Trees tree1("purple");
    Trees tree2("orange");
    Flowers flower1("yellow");
    Flowers flower2("blue");
    tree1.needWater();
    flower1.needWater();
    Garden garden1;
    garden1.fillGarden(&tree1);
    garden1.fillGarden(&tree2);
    garden1.fillGarden(&flower1);
    garden1.fillGarden(&flower2);
    garden1.water(100);

    return 0;
}