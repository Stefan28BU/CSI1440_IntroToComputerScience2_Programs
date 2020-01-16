/*
 * author: Yufan Xu
 * assignment: program challenge 12-3
 * date created: 09/05/2017
 * due date: 09/07/2017
 * assignment description: this program runs a function created by the user
 *                         the function will accept C-string as an argument
 *                         and capitalize the first word of the sentence in a string
 */

#include <iostream>
#include <string>

using namespace std;

//function prototype
void capitalize(char []);

//create constant size
const int SIZE = 50;

//main function
int main()
{
    //create an array with constant size of 50
    char words[SIZE];

    //prompt user for input
    cout << "Enter a sentence: " << endl;

    //get input including space
    cin.getline(words, SIZE);

    //call function
    capitalize(words);

    //print result
    cout << "The capitalized sentence is: " << words << endl;

    return 0;
}

void capitalize(char a[])
{
    //length of string
    int length;

    //get length
    length = strlen(a);

    //find out which letter is the first letter of a sentence
    for (int i = 0; i < length; i ++)
    {
        if (a[i] == '.' || i == 0)
        {
            if (a[i] != '.' && a[i] != ' ')
            {
                a[i] = toupper(a[i]);
            }

            else if (a[i+1] == ' ')
            {
                a[i+2] = toupper(a[i+2]);
            }
        }
    }
}