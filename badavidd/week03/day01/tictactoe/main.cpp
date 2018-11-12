#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::string ticTacResult(std::string name);

int main() {
    // Write a function that takes a filename as string,
    // open and read it. The file data represents a tic-tac-toe
    // game result. Return 'X'/'O'/'draw' based on which player
    // has winning situation.

    std::string wino = {"win-o.txt"};
    std::string winx = {"win-x.txt"};
    std::string draw = {"draw.txt"};
    std::cout << ticTacResult(wino);
    // should print O

    std::cout << ticTacResult(winx);
    // should print X

    std::cout << ticTacResult(draw);
    // should print draw

    return 0;
}

std::string ticTacResult(std::string name)
{
    std::vector<std::string> game;
    std::string line;
    std::ifstream file("../" + name);
    std::string result = {};
    while(std::getline(file, line)){
        game.push_back(line);
    }


    file.close();
    return result;
}