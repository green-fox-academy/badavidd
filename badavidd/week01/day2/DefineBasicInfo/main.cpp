#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    std::string name = "Barta David";
    int age = 26;
    double height = 1.86;
    bool married = false;

    std::cout << "My name is " << name << "." << std::endl;
    std::cout << "I am " << age << " years old." << std::endl;
    std::cout << "My height is " << height << " meters." << std::endl;

        if (married) {
            std::cout << "I am married." << std::endl;
            }
            else {
            std::cout << "I am not married." << std::endl;
            }
    return 0;
}