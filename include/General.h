#ifndef GENERAL_H
#define GENERAL_H


#include <iostream>
#include <string.h>
using namespace std;

namespace General
{       string format(string s);
        string formatparagraph(string s);
        string deleteAllSpace(string s);
        string iTrim(string str);
        bool isWhiteSpace(string str);
        bool haveCharacter(string str);
        string formatPhone(string Phone);

};

#endif // GENERAL_H
