
/*
 * author: Yufan Xu
 * assignment: proj3 1440
 * date due: 10/23/2017
 */

#ifndef INC_1440_PJ4_MYVECTOR_PROJ4_H
#define INC_1440_PJ4_MYVECTOR_PROJ4_H

#include <iostream>
#include "ContainerIfc-proj4.h"

using namespace std;

template <class T>

class MyVector: public ContainerIfc<T> {

public:
    MyVector();
    ~MyVector();
    MyVector(const MyVector&);
    MyVector<T>&operator = (const MyVector&);
    MyVector<T>& pushFront(T);
    MyVector<T>& pushBack(T);
    MyVector<T>& popFront(T&);
    MyVector<T>& popBack(T&);
    T front();
    T back();
    T &operator[](int);
    int getSize();
    bool isEmpty();

private:
    T *data;
    int size;
    int capacity;
    void grow();
    void shiftRight();
    void shiftLeft();
};

template <class T>
MyVector<T>::MyVector() {
    this->size = 0;
    this->capacity = 10;
    this->data = new T[this->capacity];
}

template <class T>
MyVector<T>::~MyVector() {
    delete [] this->data;
    this->data = NULL;
}

template <class T>
MyVector<T>::MyVector(const MyVector &other) {
    this->size = other.size;
    this->capacity = other.capacity;
    this->data = new T[this->capacity];

    for (int i = 0; i < this->size; i ++) {
        this->data[i] = other.data[i];
    }
}

template <class T>
MyVector<T> & MyVector<T>::operator=(const MyVector &other) {

    if (this != &other) {
        delete[] this->data;
        this->data = NULL;
        this->size = other.size;
        this->capacity = other.capacity;
        this->data = new T[this->capacity];

        for (int i = 0; i < this->size; i++) {
            this->data[i] = other.data[i];
        }
    }
    return *this;
}

template <class T>
int MyVector<T>::getSize() {
    return this->size;
}

template <class T>
T MyVector<T>::front() {
    if (isEmpty()) {
        throw BADINDEX();
    }
    return this->data[0];
}

template <class T>
T& MyVector<T>::operator[](int n) {
    if (n < 0 || n >= this->size) {
        throw BADINDEX();
    }
    return this->data[n];
}

template <class T>
T MyVector<T>::back() {
    if (isEmpty()) {
        throw BADINDEX();
    }
    return this->data[this->size - 1];
}

template <class T>
void MyVector<T>::grow() {
    if (this->size == this->capacity) {
        T *old = this->data;
        this->capacity *= 2;
        this->data = new T[this->capacity];

        for (int i = 0; i < this->size; i ++) {
            this->data[i] = old[i];
        }
        delete [] old;
        old = NULL;
    }
}

template <class T>
void MyVector<T>::shiftRight() {
    for (int i = this->size; i > 0; i --) {
        this->data[i] = this->data[i - 1];
    }
}

template <class T>
void MyVector<T>::shiftLeft() {
    for (int i = 0; i < this->size; i ++) {
        this->data[i] = this->data[i + 1];
    }
}

template <class T>
MyVector<T>& MyVector<T>::popBack(T &e) {
    if (!isEmpty()) {
        size --;
        e = this->data[this->size];
    }
    else
        throw BADINDEX();
}

template <class T>
MyVector<T>& MyVector<T>::pushFront(T e) {
    grow();
    shiftRight();
    this->data[0] = e;
    this->size++;
}

template <class T>
MyVector<T>& MyVector<T>::popFront(T &e) {

    if (!isEmpty()) {
        e = this->data[0];
        this->size--;
        this->shiftLeft();

    } else
        throw BADINDEX();
}

template <class T>
MyVector<T>& MyVector<T>::pushBack(T e) {
    grow();
    this->data[this->size] = e;
    this->size++;
}

template <class T>
bool MyVector<T>::isEmpty() {

    if (this->size == 0) {
        return true;
    }
    return false;
}

#endif //INC_1440_PJ4_MYVECTOR_PROJ4_H
