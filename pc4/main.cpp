/*
 * author: Yufan Xu
 * assignment: program challenge 12-4
 * date created: 09/05/2017
 * due date: 09/07/2017
 * assignment description: this program runs two function created by the user
 *                         and display the number of vowels, consonants and total
 */

#include <iostream>
#include <string>
using namespace std;

//create constant size of 50
const int SIZE = 50;

//function prototype
int numOfVowels(char []);
int numOfConsonants(char []);

//main function
int main()
{
    //create an array with a constant size
    char words[SIZE];

    //user's selection
    char choice;

    //prompt the user for input a string
    cout << "Enter a string: " << endl;

    //get input including space
    cin.getline(words, SIZE);

    //display menu each time the user enter his choice
    do
    {
        cout << "               Program menu" << endl;
        cout << "A) Count the number of vowels in the string" << endl;
        cout << "B) Count the number of consonants in the string" << endl;
        cout << "C) Count both the vowels and consonants in the string" << endl;
        cout << "D) Enter another string " << endl;
        cout << "E) Exit the program" << endl << endl;
        cout << "Make your choice: " << endl;
        cin  >> choice;

        //user can enter either in lower case or in upper case
        choice = toupper(choice);

        if (choice == 'A')
        {
            cout << numOfVowels(words)
                 << " vowels" << endl;
        }
        else if (choice == 'B')
        {
            cout << numOfConsonants(words)
                 << " consonants" << endl;
        }
        else if (choice == 'C')
        {
            cout << numOfVowels(words) + numOfConsonants(words)
                 << " vowels and consonants" << endl;
        }
        else if (choice == 'D')
        {
            cout << "Enter another string: " << endl;
            cin.getline(words, SIZE);
        }

        else if (choice == 'E')
        {
            cout << "Program finished";
        }

    } while (choice != 'E');

    return 0;
}

int numOfVowels(char a[])
{
    //number of vowels
    int num = 0;

    //get the length of string
    int length = strlen(a);

    //if there is a vowel, number of vowels add 1 each time
    for (int i = 0; i < length; i++)
    {
        if (toupper(a[i]) == 'A' ||
            toupper(a[i]) == 'E' ||
            toupper(a[i]) == 'I' ||
            toupper(a[i]) == 'O' ||
            toupper(a[i]) == 'U')
        {
            num++;
        }
    }

    //return the value of num
    return num;
}

int numOfConsonants(char a[])
{
    //total number in string
    int total = 0;

    //get length of sting
    int length = strlen(a);

    //number of consonants in a string
    int num;

    //add 1 to total each time
    for (int i = 0; i < length; i++)
    {
        if (a[i] != ' ' )
            total++;
    }

    //get number of consonants
    num = total - numOfVowels(a);

    //return value of num
    return num;
}