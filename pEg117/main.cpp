/*
 * Yufan Xu
 * eg 11-8-1
 */

#include <iostream>
#include <iomanip>
#include "NumberArray.h"

using namespace std;

int main() {

    NumberArray first(3, 10.5);

    NumberArray second = first;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Value stored in first object is ";
    first.print();
    cout << endl << "Value stored in second object is ";
    second.print();
    cout <<endl <<"Only the value in second object " << "will be changed" << endl;

    second.setValue(20.5);

    cout <<"Value stored in first object is ";
    first.print();

    cout << endl << "Value stored in second object is ";
    second.print();


   // second = first;

    second.setValue(97);
    //yufan 11-8-2

    first.print();

    second.print();



    return 0;
}