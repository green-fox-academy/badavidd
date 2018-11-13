#include <iostream>
#include "post_it.h"

class PostIt;


int main() {

PostIt postIt("orange", "blue", "Idea 1");
PostIt postIt2("pink", "black", "Awesome");
PostIt postIt3("pink", "green", "Superb!");

postIt2.setText("More awesome!");
std::cout << postIt2.getText() << std::endl;
    return 0;
}