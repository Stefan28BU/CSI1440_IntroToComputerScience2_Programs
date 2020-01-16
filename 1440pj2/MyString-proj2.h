



#ifndef INC_1440PJ2_MYSTRING_PROJ2_H
#define INC_1440PJ2_MYSTRING_PROJ2_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class MyString
{
public:
    char *data;
public:
    int capacity;
    int length;

public:
    MyString();
    ~MyString();
    MyString(const MyString &);
    MyString& operator=(const MyString &);
    bool operator==(const MyString &) const;
    bool operator<(const MyString &) const;
    void operator+=(char);
    void clear();
    string toString();
    friend ostream&operator<<(ostream &, MyString&);


};


#endif //INC_1440PJ2_MYSTRING_PROJ2_H
