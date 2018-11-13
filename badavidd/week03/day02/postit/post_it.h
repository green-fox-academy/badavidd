//
// Created by Dávid on 2018. 11. 13..
//

#ifndef POSTIT_TREE_H
#define POSTIT_TREE_H

#include <iostream>

class PostIt {
public:
    PostIt(std::string backGroundColor, std::string textColor, std::string text);

    void setBackGroundColor(std::string backGroundColor);

    std::string getBackGroundColor();

    void setTextColor(std::string textColor);

    std::string getTextColor();

    void setText(std::string text);

    std::string getText();


private:
    std::string _backGroundColor;
    std::string _textColor;
    std::string _text;
};

#endif //POSTIT_TREE_H
