#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    std::string from =  "It";
    int start = quote.find(from);
    if(start == std::string::npos)
        std::cout << " cant " << std::endl;
    else
        quote.replace(start, from.length(), "It always takes longer than");

    std::cout << quote << std::endl;
    return 0;
}