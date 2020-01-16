/*
 * author: Yufan Xu
 * assignment: program challenge 15-5
 * date due: 10/27/2017
 */

#ifndef PC15_5_FILTER_H
#define PC15_5_FILTER_H

#include <fstream>
using namespace std;

class Filter
{
public:
    virtual char transform(char ) = 0;
    void doFilter(ifstream &in, ofstream &out);
};

class Encrypt:public Filter
{
private:
    int key;

public:
    Encrypt(int );

    virtual char transform(char );
};

class ToUpper:public Filter
{
public:
    virtual char transform(char );
};

class Copy:public Filter
{
public:
    virtual char transform(char );
};

#endif //PC15_5_FILTER_H
