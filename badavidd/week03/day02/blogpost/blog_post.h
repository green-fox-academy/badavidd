//
// Created by Dávid on 2018. 11. 13..
//

#ifndef BLOGPOST_BLOG_POST_H
#define BLOGPOST_BLOG_POST_H

#include <iostream>

class BlogPost {
public:
BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);
std::string getAuthorName();
std::string getTitle();
std::string getText();
std::string getPublicationDate();


private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //BLOGPOST_BLOG_POST_H
