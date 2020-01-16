/*
 * author: Yufan Xu
 * assignment: program challenge 11-1
 * date created: 09/13/2017
 * date last modified: 09/13/2017
 * date due: 09/14/2017
 * description: this program translates numbers into English description
 */

#include <iostream> //cout, cin
#include "translate.h"  //header file included
using namespace std;

int main()
{
    int num;    //number for user input

    //prompt the user for input
    cout << "Enter a number between 0 to 9999: ";

    //read user input
    cin  >> num;

    //create class Numbers number and store user input to the constructor
    Numbers number(num);

    //call print function
    number.print();

    //program terminated
    return 0;
}