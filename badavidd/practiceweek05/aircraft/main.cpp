#include <iostream>
#include <time.h>
#include "aircraft.h"
#include "carrier.h"

int main() {
    std::srand(time(nullptr));

    Aircraft aircraft1;
    Aircraft aircraft2;
    Aircraft aircraft3;
    Aircraft aircraft4;

    Carrier carrier1(1000, 25);
    Carrier carrier2(1200, 10);

    carrier1.add(&aircraft1);
    carrier1.add(&aircraft2);
    carrier1.add(&aircraft3);

    carrier2.add(&aircraft4);

    carrier1.fill();
    carrier2.fill();

    carrier1.getStatus();
    carrier2.getStatus();
    
    carrier1.fight(carrier2);

    carrier2.getStatus();

    return 0;
}