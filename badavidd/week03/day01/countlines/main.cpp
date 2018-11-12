#include <iostream>
#include <fstream>
#include <string>

int countLine(std::string filename);

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file
    std::string filename = {"my.txt"};
    std::cout <<countLine(filename);
}

int countLine(std::string filename)
{
    std::ifstream myFile("../" + filename);
    std::string line;
    int counter = 0;
    if(myFile.is_open()){
        while(getline(myFile, line))
            counter++;
    }else {
        return 0;
    }
return counter;
}