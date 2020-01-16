/*
 * author: Yufan Xu
 * assignment: CSI 1440 Project 5
 * date due: 11/20/2017
 */

#include <iostream>
#include "List-proj5.h"

using namespace std;

int main() {

    cout << "NOW BEGIN TO TEST ALL MEMBER FUNCTIONS..." << endl << endl;

    cout <<  "Beginning PushFront..." << endl;
    cout <<  "Testing Operator[]..." << endl;

    List<int> list1;

    for (int i = 0; i < 10; i ++) {
        list1.pushFront(i);
    }

    for (int i = 0; i < list1.getSize(); i ++) {
        cout << list1[i] << "   ";
    }
    cout << endl << endl;

    cout <<  "Testing Front..." << endl;
    cout << list1.front() << endl << endl;

    cout <<  "Testing Back..." << endl;
    cout << list1.back() << endl << endl;

    cout << "Testing GetSize..." << endl;
    cout << list1.getSize() << endl << endl;

    cout <<  "Beginning PushBack..." << endl;
    cout <<  "Testing Operator[]..." << endl;

    //List<int> list2;

    for (int i = 0; i < 10; i ++) {
        list1.pushBack(i);
    }

    for (int i = 0; i < list1.getSize(); i ++) {
        cout << list1[i] << "   ";
    }
    cout << endl << endl;

    cout <<  "Testing Front..." << endl;
    cout << list1.front() << endl << endl;

    cout <<  "Testing Back..." << endl;
    cout << list1.back() << endl << endl;

    cout << "Testing GetSize..." << endl;
    cout << list1.getSize() << endl << endl;

    cout << "Testing PopFront..." << endl;
    int e;
    list1.popFront(e);

    for (int i = 0; i < list1.getSize(); i ++) {
        cout << list1[i] << "   ";
    }
    cout << endl << endl;

    cout <<  "Testing Front..." << endl;
    cout << list1.front() << endl << endl;

    cout <<  "Testing Back..." << endl;
    cout << list1.back() << endl << endl;

    cout << "Testing GetSize..." << endl;
    cout << list1.getSize() << endl << endl;

    cout << "Testing PopBack..." << endl;

    list1.popBack(e);

    for (int i = 0; i < list1.getSize(); i ++) {
        cout << list1[i] << "   ";
    }
    cout << endl << endl;

    cout <<  "Testing Front..." << endl;
    cout << list1.front() << endl << endl;

    cout <<  "Testing Back..." << endl;
    cout << list1.back() << endl << endl;

    cout << "Testing GetSize..." << endl;
    cout << list1.getSize() << endl << endl;

    cout << "Testing Operator =..." << endl;

    List<int> list2 = list1;

    for (int i = 0; i < list2.getSize(); i ++) {
        cout << list2[i] << "   ";
    }
    cout << endl << endl;

    cout << "Testing Copy Constructor..." << endl;

    List<int> list3(list2);

    for (int i = 0; i < list3.getSize(); i ++) {
        cout << list3[i] << "   ";
    }
    cout << endl << endl;

    cout << "Testing IsEmpty..." << endl;

    if (!list1.isEmpty()) {
        cout << "Not Empty" << endl;
        cout << "Passed" << endl << endl;
    }
    else {
        cout << "Empty" << endl;
        cout << "Failed" << endl << endl;
    }

    cout << "Testing toString..." << endl;
    list3.toString(cout);
    cout << endl << endl;

    cout << "Testing toString1..." << endl;
    cout << list3.toString1();
    cout << endl << endl;

    cout << "Testing print..." << endl;
    list3.print();
    cout << endl << endl;

    cout << "TESTING FINISHED." << endl;



    return 0;
}