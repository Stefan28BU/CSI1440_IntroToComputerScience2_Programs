//
// Created by 徐宇帆 on 17/10/30.
//

#ifndef LAB9_MYARRAY_H
#define LAB9_MYARRAY_H

#include "ContainerIfc.h"
#include <sstream>

using namespace std;

template <class T>

class MyArray: public ContainerIfc<T> {
private:
    T *data;
    int length;
    int capacity;
public:
    MyArray();
    ~MyArray();
    MyArray(const MyArray &);
    MyArray &operator = (const MyArray &);
    MyArray<T>& pushBack(T);
    MyArray<T>& popBack(T &);
    int getSize();
    bool isEmpty();
    T&operator[](int);
    string toString();
    void writeObject(ostream &);
    void readObject(istream &);
};

template <class T>
MyArray<T>::MyArray() {
    this->length = 0;
    this->capacity = 5;
    this->data = new T[this->capacity];
}

template <class T>
MyArray<T>::~MyArray() {
    delete [] this->data;
    this->data = NULL;
}

template <class T>
MyArray<T>::MyArray(const MyArray &other) {
    this->length = other.length;
    this->capacity = other.capacity;
    this->data = new T[this->capacity];

    for (int i = 0; i < this->length; i ++) {
        this->data[i] = other.data[i];
    }
}

template <class T>
MyArray<T>& MyArray<T>::operator=(const MyArray &other) {
    if (this != &other) {
        delete [] this->data;
        this->data = NULL;
        this->length = other.length;
        this->capacity = other.capacity;

        for (int i = 0; i < this->length; i ++) {
            this->data[i] = other.data[i];
        }
    }

    return *this;
}

template <class T>
bool MyArray<T>::isEmpty() {
    if (this->data == 0) {
        return true;
    }
    return false;
}

template <class T>
T & MyArray<T>::operator[](int i) {
    if (i < 0 || i >= this->length) {
        throw BadIndexException();
    }
    return this->data[i];
}

template <class T>
int MyArray<T>::getSize() {
    return this->length;
}

template <class T>
MyArray<T>& MyArray<T>::popBack(T &e) {
    if (isEmpty()) {
        throw BadIndexException();
    }
    this->length --;
    e = this->data[this->length];
}

template <class T>
MyArray<T>& MyArray::pushBack(T e) {
    if (isEmpty()) {
        throw BadIndexException();
    }
    if (this->length == this->(capacity * 3/4)) {
        T *old = this->data;
        this->capacity += 5;

        for (int i = 0; i < this->length; i ++) {
            this->data[i] = old[i];
        }
        delete [] old;
        old = NULL;
    }
    this->length++;
    this->data[this->length] = e;
}

template <class T>
string MyArray<T>::toString() {
    ostringstream out;

    for (int i = 0; i < this->length; i ++) {
        out << this->data[i] << "   ";
    }
    return out.str();
}

template <class T>
void MyArray<T>::readObject(istream &istr) {

}

#endif //LAB9_MYARRAY_H
