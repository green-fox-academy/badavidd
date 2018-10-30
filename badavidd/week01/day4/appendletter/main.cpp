#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> appendA (const std::vector<std::string>& animals);

int main(int argc, char* args[])
{
    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.

    for(const auto& animal : appendA(animals))
    {
        std::cout << animal << " ";
    }

    return 0;
}

std::vector<std::string> appendA (const std::vector<std::string>& animals){

    std::string valt;
    std::vector<std::string> kesz;

    for(int i = 0; i < animals.size(); i++)
    {
        valt = animals[i];
        valt.append("a");
        kesz.push_back(valt);
    }
    return kesz;
}