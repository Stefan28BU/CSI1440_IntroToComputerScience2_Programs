/*
 * yufan xu 11-9
 */

#include <iostream>
#include "overload.h"
#include <iomanip>

using namespace std;

int main() {
    NumberArray first (3, 10.5);
    NumberArray second(5, 20.5);

    cout <<setprecision(2) << fixed << showpoint;
    cout <<"First object's data is ";
    first.print();
    cout << endl << "second object's data is ";
    second.print();

    cout << endl << "Now we will assign the second object " << "to the first." << endl;

    first = second;

    cout << "First object's data is ";
    first.print();
    cout << endl << "second object's data is ";
    second.print();

    return 0;
}