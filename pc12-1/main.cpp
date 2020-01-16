/*
 * author: Yufan Xu
 * assignment: program challenge 12-1
 * date created: 09/05/2017
 * due date: 09/07/2017
 * assignment description: this program runs a function created by the user
 *                         the function will accept C-string as an argument
 *                         and returns the number of words contained in the string
 */

#include <iostream>
#include <string>

using namespace std;

//function prototype
int getNum(char []);

//create constant size of 50
const int SIZE = 50;

//main function
int main()
{
    //create an array with size of 30
    char words[SIZE];

    //prompt the user for input
    cout << "Type a sentence: " << endl;

    //get all inputs including space
    cin.getline(words, SIZE);

    //call function
    cout << "The number of words in the sentence is: " << getNum(words) << endl;

    return 0;
}

int getNum(char a[])
{
    //length of string
    int length = 50;

    //number of words
    int num = 1;

    //get length of string
    length = strlen(a);

    for (int i = 0; i < length; i ++)
    {
        if (a[i] == ' ')
        {
            num ++;
        }
    }

    return num;
}
