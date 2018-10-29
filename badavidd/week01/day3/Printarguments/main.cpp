#include <iostream>
#include <string>

std::string printParams(std::string a){
    std::cout << a << std::endl;
}

std::string printParams(std::string a, std::string b){
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}

std::string printParams(std::string a, std::string b, std::string c){
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}

int main(int argc, char* args[]) {

    printParams("egy");
    printParams("egy","ketto");
    printParams("egy","ketto","harom");

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...
    return 0;
}

