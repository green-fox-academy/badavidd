#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

std::vector<std::string> IP(std::string name);

float ratio(std::string name);

int main() {

    std::string name = {"log.txt"};
    IP(name);
    std::cout << ratio(name);
    return 0;
}

std::vector<std::string> IP(std::string name) {
    std::vector<std::string> addresses;
    std::string line = {};
    std::string day = {};
    std::string month = {};
    int num = 0;
    std::string time = {};
    int year = 0;
    std::string IP = {};
    std::string rat = {};
    std::string shit = {};

    std::ifstream file("../" + name);
    if (file.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }
    while (file >> day >> month >> num >> time >> year >> IP >> rat >> shit) {
        addresses.push_back(IP);
    }
    file.close();

    return addresses;
}


float ratio(std::string name) {
    float ratio = 0;
    float get = 0;
    int post = 0;
    std::string line = {};
    std::string day = {};
    std::string month = {};
    int num = 0;
    std::string time = {};
    int year = 0;
    std::string IP = {};
    std::string rat = {};
    std::string shit = {};

    std::ifstream file("../" + name);
    if (file.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }
    while (file >> day >> month >> num >> time >> year >> IP >> rat >> shit) {
        if(rat.find("GET")){
            get++;
        }else{
            post++;
        }
    }

    std::cout << get << std::endl;
    std::cout << post << std::endl;
    ratio = get / post;
    file.close();
    return ratio;
}