/*
 * author: Yufan Xu
 * assignment: program challenge 11-1
 * date created: 09/13/2017
 * date last modified: 09/13/2017
 * date due: 09/14/2017
 * description: this program translates numbers into English description
 */

#ifndef PC11_1_TRANSLATE_H
#define PC11_1_TRANSLATE_H

#include <iostream>
#include <string>
using namespace std;

class Numbers
{
public:
    int number; //number from 0 to 9999

    //create constant string variables with different cases
    const static string lessThan20[];
    const static string greaterThan20[];
    const static string hundred;
    const static string thousand;

    //constructor
    Numbers(int);

    //member function
    //print final result on screen
    void print();

    //get description for number that user entered
    void getDes();
};

#endif //PC11_1_TRANSLATE_H
