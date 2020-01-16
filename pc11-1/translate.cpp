/*
 * author: Yufan Xu
 * assignment: program challenge 11-1
 * date created: 09/13/2017
 * date last modified: 09/13/2017
 * date due: 09/14/2017
 * description: this program translates numbers into English description
 */

#include <iostream> //cout
#include "translate.h"  //header file included
using namespace std;

//constant static string variables
const string Numbers::lessThan20[] =
        {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
         "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
         "sisteen", "seventeen", "eighteen", "nineteen"};
const string Numbers::greaterThan20[] =
        {"zero", "ten", "twenty", "thirty", "forty", "fifty", "sixty",
         "seventy", "eighty", "ninety" };
const string Numbers::hundred = " hundred ";
const string Numbers::thousand = " thousand ";

//create constructor
Numbers::Numbers(int num)
{
    //set user input to an Numbers variable
    number = num;
}

//create print function
void Numbers::print()
{
    //display result if the number is in range
    if (number >= 0 && number <= 9999)
    {
        cout << "In Range!" << endl;
        getDes();
    }
        // display error message if out of range
    else
    {
        cout << "Out of Range!" << endl;
    }
}

//create getDes function
void Numbers::getDes()
{
    int n; //number that represent each digit under different circumstances

    //get thousands digits
    n = number / 1000;

    //print if exists
    if (n != 0)
    {
        cout << lessThan20[n] << thousand;
    }

    //get units digits
    number %= 1000;

    //get hundreds digits
    n = number / 100;

    //print if exists
    if (n != 0)
    {
        cout << lessThan20[n] << hundred;
    }

    //get first two digits
    number %= 100;

    //if greater than 20
    if (number >= 20)
    {
        //get tens digits
        n = number / 10;

        //print if exists
        if (n != 0)
        {
            cout << greaterThan20[n] << " ";
        }
    }

        //print if greater than 10 but not 20
    else if (number >= 10 && number <= 20)
    {
        cout << lessThan20[number] << " ";
    }

    //get first digit
    number %= 10;

    //print if exists
    if (number != 0)
    {
        cout << lessThan20[number] << " ";
    }
}