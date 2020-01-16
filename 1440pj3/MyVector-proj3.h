/*
 * author: Yufan Xu
 * assignment: proj3 1440
 * date due: 10/23/2017
 */

#ifndef INC_1440PJ3_MYVECTOR_PROJ3_H
#define INC_1440PJ3_MYVECTOR_PROJ3_H

#include "ContainerIfc-proj3.h"

class MyVector: public ContainerIfc {

public:
    MyVector();
    ~MyVector();
    MyVector(const MyVector&);
    MyVector&operator = (const MyVector&);
    MyVector& pushFront(int);
    MyVector& pushBack(int);
    MyVector& popFront(int&);
    MyVector& popBack(int&);
    int front();
    int back();
    int &operator[](int);
    int getSize();
    bool isEmpty();

private:
    int *data;
    int size;
    int capacity;
    void grow();
    void shiftRight();
    void shiftLeft();
};

MyVector::MyVector() {
    this->size = 0;
    this->capacity = 10;
    this->data = new int[this->capacity];
}

MyVector::~MyVector() {
    delete [] this->data;
    this->data = NULL;
}

MyVector::MyVector(const MyVector &other) {
    this->size = other.size;
    this->capacity = other.capacity;
    this->data = new int[this->capacity];

    for (int i = 0; i < this->size; i ++) {
        this->data[i] = other.data[i];
    }
}

MyVector& MyVector::operator=(const MyVector &other) {
    if (this != &other) {
        delete[] this->data;
        this->data = NULL;
        this->size = other.size;
        this->capacity = other.capacity;
        this->data = new int[this->capacity];

        for (int i = 0; i < this->size; i++) {
            this->data[i] = other.data[i];
        }
    }
    return *this;
}

int MyVector::getSize() {
    return this->size;
}

int MyVector::front() {
    return this->data[0];
}

int& MyVector::operator[](int n) {
    return this->data[n];
}

int MyVector::back() {
    return this->data[this->size - 1];
}

void MyVector::grow() {
    if (this->size == this->capacity) {
        int *old = this->data;
        this->capacity *= 2;
        this->data = new int[this->capacity];

        for (int i = 0; i < this->size; i ++) {
            this->data[i] = old[i];
        }
        delete [] old;
        old = NULL;
    }
}

void MyVector::shiftRight() {
    for (int i = this->size; i > 0; i --) {
        this->data[i] = this->data[i - 1];
    }
}

void MyVector::shiftLeft() {
    for (int i = 0; i < this->size; i ++) {
        this->data[i] = this->data[i + 1];
    }
}
MyVector& MyVector::popBack(int &e) {
    e = this->size - 1;
    this->data[e] = '\0';
    e --;
    this->size --;
}

MyVector& MyVector::pushFront(int e) {
    grow();
    shiftRight();
    this->data[0] = e;
    this->size++;
}

MyVector& MyVector::popFront(int &e) {
    e = 0;
    this->data[e] = '\0';
    e++;
    this->size --;
    shiftLeft();
}

MyVector& MyVector::pushBack(int e) {
    grow();
    this->data[this->size] = e;
    this->size++;
}

bool MyVector::isEmpty() {
    if (this->data[0] == '\0') {
        return true;
    }
    return false;
}

#endif //INC_1440PJ3_MYVECTOR_PROJ3_H
