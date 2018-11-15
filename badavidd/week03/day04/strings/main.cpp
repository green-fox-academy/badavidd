#include <iostream>
#include <string>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

std::string change(std::string &word, int n) {
    if (n < word.size()) {
        if (word[n] == 'x')
            word[n] = 'y';
        return change(word, n + 1);
    } else {
        return word;
    }
}


int main() {
    std::string thing = {"xxxaaaxxxbbbxxxcccxxx"};
    std::cout << change(thing, 0);

    return 0;
}