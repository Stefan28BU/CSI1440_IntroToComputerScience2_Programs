/*
 * author: Yufan Xu
 * assignment: program challenge 15-5
 * date due: 10/27/2017
 */

#include <iostream>
#include <fstream>
#include "filter.h"

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    string inFileName;
    string outFileName;

    cout << "Enter the input filename: ";
    cin  >> inFileName;
    cout << "Enter output filename: ";
    cin  >> outFileName;

    inFile.open(inFileName);
    outFile.open(outFileName);

    if (!inFile)
    {
        cerr << "Input File Not Opened." << endl;

        return -1;
    }

    if (!outFile)
    {
        cerr << "Output File Not Opened." << endl;

        return -1;
    }

    int key;

    cout << "Enter the value of key: " << endl;
    cin >> key;

    Encrypt e(key);
    e.doFilter(inFile, outFile);

    outFile.close();
    inFile.clear();

    inFile.seekg(0L, ios::beg);

    cout << "Enter the output filename for transformed text: " << endl;
    cin >> outFileName;
    outFile.open(outFileName);

    if (!outFile)
    {
        cerr << "Output File Not Opened." << endl;

        return -1;
    }

    ToUpper up;
    up.doFilter(inFile,outFile);

    outFile.close();
    inFile.clear();

    inFile.seekg(0L, ios::beg);

    cout << "Enter the filename of original copy: " << endl;
    cin >> outFileName;
    outFile.open(outFileName);


    if (!outFile)
    {
        cerr << "Output File Not Opened." << endl;

        return -1;
    }

    Copy c;

    c.doFilter(inFile, outFile);

    inFile.clear();
    inFile.close();
    outFile.close();

    return 0;
}