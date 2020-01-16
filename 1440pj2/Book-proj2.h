

#ifndef INC_1440PJ2_BOOK_PROJ2_H
#define INC_1440PJ2_BOOK_PROJ2_H
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
#include <iomanip>
#include "Word-proj2.h"
using namespace std;

class Book
{
public:
    Word * list;
public:
    int capacity;
    int length;

public:
    Book();
    ~Book();
    Book(const Book &);
    Book& operator=(const Book &);
    void addWord(Word &);
    string toString();
    void orderWordsAlpha();
    void orderWordsFreq();
    friend ostream&operator<<(ostream&, Book &);
};

#endif //INC_1440PJ2_BOOK_PROJ2_H
