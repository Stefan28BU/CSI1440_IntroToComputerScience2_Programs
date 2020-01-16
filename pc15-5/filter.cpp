/*
 * author: Yufan Xu
 * assignment: program challenge 15-5
 * date due: 10/27/2017
 */

#include <iostream>
#include <cctype>
#include <fstream>
#include "filter.h"

using namespace std;

void Filter::doFilter(ifstream &in, ofstream &out)
{
    char ch;
    while (in)
    {
        in.get(ch);
        ch = transform(ch);
        out << ch;
    }
}

char Encrypt::transform(char ch)
{
    ch += this->key;
    return ch;
}

Encrypt::Encrypt(int k) {
    this->key = k;
}

char ToUpper::transform(char ch)
{
    return toupper(ch);
}

char Copy::transform(char ch)
{
    return ch;
}