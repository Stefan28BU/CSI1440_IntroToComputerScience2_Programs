/*
 * Author:                 Yufan_Xu
 * Assignment Title:       Project 1
 * Assignment Description: This assignment is the first project and requires
 *                         the author to create a program that can read
 *                         certain operations from an input text file without
 *                         using any string or cstring function or variables
 * Due Date:               9/11/2017
 * Date Created:           9/11/2017
 * Date Last Modified:     9/11/2017
 */

/*
 * Data Abstraction:
 *            vars v, char line[50], ifstream infile, struct vars with
 *                  char name[20] and int value, char a, int i = 0,
 *                  count1, count2, count3, count4, count5, and inizialized
 *                  to 0, bool assign, print, list and initialized to false
 * Input:
 *            The program reads from a input text file, the program does not
 *                  allow any input from the user
 * Process:
 *            The program will read three commands from the text file, and
 *                  do certain operations depending on different commands
 * Output:
 *           The program will display the name of variable and the value
 *                  of the variable if there is a list command, the program
 *                  will display the value of the variable if there is a
 *                  print command, the program will display error message
 *                  if there is not a variable with value
 * Assumptions:
 *           It is assumed that, having been prompted to do so, the input
 *                  file will be read correctly
 */

#include <iostream> //cout, endl
#include <fstream>  //ifstream

using namespace std;

//create a struct called vars
struct vars
{
    char name[20];  //character array name
    int value;      //integer value
};

//main function
int main()
{
    vars v; //create struct variable

    ifstream infile;    //create file variable

    char line[50];  //create char array
    char a; //create char

    int i = 0;  //integer counter for loop

    //open and read from file
    infile.open ("commands.txt");

    //check if the file is opened
    if (!infile)
    {
        cerr << "File Not Opened" << endl;

        return -1;
    }

    //create and initialize counter
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;

    //while read from the file
    while (infile >> a)
    {
        //assign each char array to a whole char
        line[i] = a;

        //if there is a ':' in the char array
        if (line[i] == ':')
        {
            count1 ++;
        }

        //if there is a ';' in the char array
        if (line[i] ==';')
        {
            count2 ++;
        }

        //count the total numbers of ':'
        if(line[count3] != ':')
        {
            count3 ++;
        }

        //if there is only one ':'
        if(count1 < 2)
        {
            count4 ++;
        }

        //if there is no gap between ';' and ':'
        if (count2 <1)
        {
            count5 ++;
        }

        //counter for the while loop
        i++;

    }

    //close file
    infile.close();

    //boolean and set to false
    bool assign = false;
    bool print = false;
    bool list = false;

    //determine certain commands
    for (int j=0; j < count2; j ++)
    {
        //if ';' showed up at least once, then assign exist
        if (j <= 1)
        {
            assign = true;
        }

        //if ';' showed up at least twice but there is no gap then print exist
        if (j <= 2 && (count5 - count4)!= 1)
        {
            print = true;
        }

        //if ';' showed up at least twice but there is a gap then print exist
        if (j <= 2 && (count5 - count4) == 1)
        {
            print = false;
        }

        //if ';' showed up at least third times, then list exist
        if (j <= 3)
        {
            list = true;
        }
    }

    //store to struct if assign is true
    if (assign == true)
    {
        for (int j = 0; j < count4 - count3 - 1; j ++)
        {
            a = line[j + count3 + 1];
            v.name[j] = a;
        }

        //use ascii code to convert char to int
        v.value = line[count4 + 1] - 48;
    }

    //display value if print is true
    if (print == true)
    {
        cout << v.value << endl;
    }

    //display error message if list is false
    if (print == false)
    {
        cout << "undefined" << endl;
        list = false;
    }

    //display both name and value if list is true
    if (list == true)
    {
        cout << v.name << " " << v.value << endl;
    }

    return 0;
}




