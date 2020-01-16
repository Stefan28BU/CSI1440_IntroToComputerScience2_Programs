//
// Created by 徐宇帆 on 17/9/22.
//

#include "Word-proj2.h"

Word::Word() {
    this->frequency = 0;
}

void Word::setWord(const MyString &other) {
     this->str = other;
}

string Word::toString() {
    ostringstream out;

    out << this->str;
    out << "  " << this->frequency << endl;

    return out.str();
}

ostream& operator<<(ostream &out, Word &other) {
    out << other.str;

    return out;
}

MyString& Word::getData() {
    return this->str;
}

int Word::getFrequency() {
    return this->frequency;
}

bool Word::incrFrequency(const MyString &other) {

    if (this->str == other) {
        this->frequency++;
        return true;
    }

    else {
        return false;
    }
}