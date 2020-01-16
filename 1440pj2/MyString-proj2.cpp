//
// Created by 徐宇帆 on 17/9/22.
//
#include "MyString-proj2.h"

MyString::MyString() {
    this->length = 0;
    this->capacity = 5;
    this->data = new char[this->capacity];
}

MyString::~MyString() {
    delete [] this->data;
    this->data = NULL;
}

MyString::MyString(const MyString &other) {
    this->length = other.length;
    this->capacity = other.capacity;
    this->data = new char[this->capacity];

    for (int i = 0; i < this->length; i ++) {
        this->data[i] = other.data[i];
    }
}

MyString& MyString::operator=(const MyString &other) {
    if (this != &other) {
        delete [] this->data;
        this->length = other.length;
        this->capacity = other.capacity;
        this->data = new char[this->capacity];

        for (int i = 0; i < this->length; i ++) {
            this->data[i] = other.data[i];
        }
    }

    return *this;
}


bool MyString::operator==(const MyString &other) const {
    for (int i = 0; i < this->length; i ++) {
        if (this->data[i] == other.data[i]) {
            return true;
        }
        else {
            return false;
        }
    }
}

string MyString::toString() {
    ostringstream out;

    for (int i = 0; i < this->length; i ++) {
        out << this->data[i] << " ";
    }
    out << endl;
    out << "Capacity: " << this->capacity << endl;
    out << "Length: " << this->length << endl;

    return out.str();
}

ostream& operator<<(ostream &out, MyString & other) {
    for(int i = 0; i < other.length; i++) {
        out << other.data[i];
    }
    return out;
}

void MyString::operator+=(char ch) {
    if(this->length == this->capacity) {
        char* old = this->data;
        this->capacity *= 2;
        this->data = new char[this->capacity];
        for(int i = 0; i < this->length; i++) {
            this->data[i] = old[i];
        }
        delete [] old;
        old = NULL;
    }
    this->data[this->length] = ch;
    this->length++;
}

void MyString::clear() {

    for (int i = 0; i < this->length; i ++) {
        this->data[i] = '\0';
    }
    this->capacity = 5;
    this->length = 0;
}

bool MyString::operator<(const MyString & other) const {
    int shorter;
    if (this->length > other.length)
    {
        shorter = other.length;
    }
    else {
        shorter = this->length;
    }//shorter one
    for(int i = 0; i < shorter; i ++) {
        if(this->data[i] < other.data[i]) {
            return true;
        }

        else {
            return false;
        }
    }
}