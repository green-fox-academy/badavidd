#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::ofstream name("../myname.txt");
    std::string myName = {"Barta Dávid"};
    if (name.is_open()) {
        name << myName << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }

    return 0;
}