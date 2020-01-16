

#ifndef INC_1440PJ2_WORD_PROJ2_H
#define INC_1440PJ2_WORD_PROJ2_H

#include <iostream>
#include <string>
#include <sstream>
#include "MyString-proj2.h"
using namespace std;

//#include "Book-proj2.h"

class Word
{
public:
    MyString str;
    int frequency;
public:
    Word();
    bool incrFrequency(const MyString&);
    void setWord(const MyString&);
    int getFrequency();
    MyString &getData();
    string toString();
    friend ostream&operator<<(ostream &, Word &);
};
#endif //INC_1440PJ2_WORD_PROJ2_H
