#include <iostream>
#include <fstream>
#include <string>
#include <exception>


int main() {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream file;
    file.open("../myFile.txt");
    if (file.is_open()) {
        std::cout << "File read. :)" << std::endl;
    } else {
        std::cout << "Can't read file :(";
    }
    std::string text;
    while (getline(file, text)) {
        std::cout << text << std::endl;
    }
    return 0;
}