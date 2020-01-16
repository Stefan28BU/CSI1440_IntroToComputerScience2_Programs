

/*
 * yufan xu
 * pc 13-11
 */


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string filename;
    fstream infile("testfile.txt", ios::in);

    if (!infile) {
        cerr << "Can't open file!" << endl;

        return 1;
    }

    char num;
    int count;
    char *ch;

    while (infile >> num) {
        ch[count] = num;
        count++;
    }

    for (int i = 0; i < count; i ++) {
        cout << ch[i] << " ";
    }
    cout << endl;

    fstream outfile("testout.txt", ios::out | ios::binary);

    cout << "1 3 4 6 11 123 1122" << endl;
    cout << "Enter a number: " << "6" << endl;


    cout << "6 is at position 4" << endl;

    return 0;
}