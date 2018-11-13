//
// Created by Dávid on 2018. 11. 13..
//

#include "blog_post.h"

BlogPost::BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate) {
_authorName = authorName;
_title = title;
_text = text;
_publicationDate = publicationDate;
std::cout << "One post created." << std::endl;
}

std::string BlogPost::getAuthorName() {
    return _authorName;
}

std::string BlogPost::getTitle() {
    return _title;
}

std::string BlogPost::getText() {
    return _text;
}

std::string BlogPost::getPublicationDate() {
    return _publicationDate;
}
