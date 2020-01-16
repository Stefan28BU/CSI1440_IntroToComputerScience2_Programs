/*
 * author: Yufan Xu
 * assignment: proj3 1440
 * date due: 10/23/2017
 */

#include <iostream>
#include "MyVector-proj4.h"

using namespace std;

void checkEmpty(ContainerIfc<int> *);

int main() {
    ContainerIfc<int> *vec1 = new MyVector<int>;
    ContainerIfc<int> *vec2 = new MyVector<int>;

    cout << endl << "NOW BEGINNING THE TEST... " << endl << endl;
    cout << "Inserting elements to vec1..." << endl;
    vec1->pushBack(1);
    vec1->pushBack(3);
    vec1->pushBack(12);
    vec1->pushBack(3);

    cout << "Now there're " << vec1->getSize() <<  " elements in vec1, ";
    checkEmpty(vec1);
    cout << "The current elements in vec1 are: ";

    for (int i = 0; i < vec1->getSize(); i ++) {
        cout << vec1->operator[](i) << " ";
    }
    cout << endl;

    cout << endl << "Now adding the number 7 to the beginning of vec1..." << endl;
    vec1->pushFront(7);

    cout << "So now the current elements in vec1 are: ";
    for (int i = 0; i < vec1->getSize(); i ++) {
        cout << vec1->operator[](i) << " ";
    }
    cout << ", and the size of vec1 is: " << vec1->getSize() << endl;

    cout << endl << "Now adding the number 9 to the beginning of vec1..." << endl;
    vec1->pushFront(9);

    cout << "So now the current elements in vec1 are: ";
    for (int i = 0; i < vec1->getSize(); i ++) {
        cout << vec1->operator[](i) << " ";
    }
    cout << ", and the size of vec1 is: " << vec1->getSize() << endl;

    cout << "So the first element in vec1 is: " << vec1->front() << endl;
    cout << "The last element in vec1 is: " << vec1->back() << endl;
    cout << "The 4th element in vec1 is: " << vec1->operator[](3) << endl;

    cout << endl << "Now inserting more elements to vec1..." << endl;
    vec1->pushBack(19);
    vec1->pushBack(13);
    vec1->pushBack(5);
    vec1->pushBack(15);
    vec1->pushBack(7);
    vec1->pushBack(2);
    vec1->pushBack(8);

    cout << "Now the size grows to: " << vec1->getSize() << endl;
    cout << "The current elements are: ";
    for (int i = 0; i < vec1->getSize(); i ++) {
        cout << vec1->operator[](i) << " ";
    }
    cout << endl;
    cout << "So it looks like the vector can resize itself if there are more than 10 elements!" << endl;

    cout << endl << "I did not put any elements in vec2 yet..." << endl;
    cout << "So there're " << vec2->getSize() <<  " elements in vec2, ";
    checkEmpty(vec2);

    vec2->pushBack(11);
    vec2->pushBack(1);

    cout << "Then I added " << vec2->getSize() << " elements in vec2, so now ";
    checkEmpty(vec2);
    cout << "So now the elements in vec2 are: ";

    for (int i = 0; i < vec2->getSize(); i ++) {
        cout << vec2->operator[](i) << " ";
    }
    cout << endl;

    cout << endl << "Now I assign vec2 equals vec1..." << endl;
    vec2 = vec1;

    cout << "So now the elements in vec2 becomes: ";

    for (int i = 0; i < vec2->getSize(); i ++) {
        cout << vec2->operator[](i) << " ";
    }
    cout << endl;

    cout << "The size of current vec2 becomes: " << vec2->getSize() << endl;

    cout << endl << "Now remove one element from the end of vec2..." << endl;
    int n = vec2->getSize();
    vec2->popBack(n);

    cout << "So the elements of vec2 are now: ";
    for (int i = 0; i < vec2->getSize(); i ++) {
        cout << vec2->operator[](i) << " ";
    }
    cout << endl;

    cout << "The size of current vec2 is: " << vec2->getSize() << endl;
    cout << endl << "Now remove another two elements from the end of vec2..." << endl;

    vec2->popBack(n);
    vec2->popBack(n);

    cout << "So the elements of vec2 are now: ";

    for (int i = 0; i < vec2->getSize(); i ++) {
        cout << vec2->operator[](i) << " ";
    }
    cout << endl;

    cout << "The size of current vec2 is: " << vec2->getSize() << endl;

    cout << endl << "Now remove an element from the beginning of vec2..." << endl;

    vec2->popFront(n);

    cout << "So now the elements in vec2 are: ";
    for (int i = 0; i < vec2->getSize(); i ++) {
        cout << vec2->operator[](i) << " ";
    }
    cout << endl;

    cout << "The current size of vec2 is: " << vec2->getSize() << endl;

    cout << endl << "Now remove another element from the beginning of vec2..." << endl;
    vec2->popFront(n);

    cout << "So now the elements in vec2 are: ";
    for (int i = 0; i < vec2->getSize(); i ++) {
        cout << vec2->operator[](i) << " ";
    }
    cout << endl;

    cout << "The current size of vec2 is: " << vec2->getSize() << endl;

    cout << endl << "FINALLY, THIS IS THE END OF THE TEST!" << endl;
    cout << "SEEMS ALL THE FUNCTIONS ARE WORKING PROPERLY!" << endl;

    try {
        cout << vec1->back() << " No BADINDEX";
    }catch (BADINDEX){};

    return 0;
}

void checkEmpty(ContainerIfc<int> *v) {

    if (v->isEmpty()) {
        cout << "THIS VECTOR IS EMPTY!" << endl;
    }
    else {
        cout << "THIS VECTOR IS NOT EMPTY!" << endl;
    }
}