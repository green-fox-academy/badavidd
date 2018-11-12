#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copy(std::string, std::string);

int main() {

    std::string file = {"original.txt"};
    std::string newfile = {"copied.txt"};

    std::cout << copy(file, newfile) << std::endl;

    return 0;
}

bool copy(std::string file, std::string newfile) {
    std::ifstream file2("../" + file);
    std::ofstream newfile2("../" + newfile);
    std::string line;
    if (file2.is_open() || newfile2.is_open()) {
        while (std::getline(file2, line))
            newfile2 << line << std::endl;
    } else {
        return false;
    }
    file2.close();
    newfile2.close();
    return true;
}