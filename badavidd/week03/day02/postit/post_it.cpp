//
// Created by Dávid on 2018. 11. 13..
//

#include "post_it.h"


PostIt::PostIt(std::string backGroundColor, std::string textColor, std::string text) {
_backGroundColor = backGroundColor;
_textColor = textColor;
_text = text;

std::cout << _backGroundColor << " " << _textColor << " " << _text << std::endl;

}

void PostIt::setBackGroundColor(std::string backGroundColor) {
_backGroundColor = backGroundColor;
}

std::string PostIt::getBackGroundColor() {
    return _backGroundColor;
}

void PostIt::setTextColor(std::string textColor) {
_textColor = textColor;
}

std::string PostIt::getTextColor() {
    return _textColor;
}

void PostIt::setText(std::string text) {
_text = text;
}

std::string PostIt::getText() {
    return _text;
}
