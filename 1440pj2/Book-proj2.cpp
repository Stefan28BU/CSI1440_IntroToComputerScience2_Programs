//
// Created by 徐宇帆 on 17/9/22.
//

#include "Book-proj2.h"

using namespace std;

Book::Book() {
    this->length = 0;
    this->capacity = 5;
    this->list = new Word[this->capacity];
}


Book::Book(const Book &other) {
    this->length = other.length;
    this->capacity = other.capacity;
    this->list = new Word[this->capacity];

    for (int i = 0; i < this->length; i ++) {
        this->list[i] = other.list[i];
    }
}

Book::~Book() {
    delete [] this->list;
    this->list = NULL;
}

Book& Book::operator=(const Book &other) {
    if (this != &other) {
        delete [] this->list;
        this->length = other.length;
        this->capacity = other.capacity;
        this->list = new Word[this->capacity];

        for (int i = 0; i < this->length; i ++) {
            this->list[i] = other.list[i];
        }
    }
    return *this;
}

void Book::addWord(Word &other) {


    if (this->length == this->capacity){
        Word *old = this->list;
        this->capacity *= 2;
        this->list = new Word[this->capacity];

        for (int i = 0; i < this->length; i ++){
            this->list[i] = old[i];
        }
        delete [] old;
        old = NULL;

    }
    if(this->length > 0){

        int count = 0;
        int index = -1;
        this->list[this->length] = other;
        for(int i = 0; i< this->length && index == -1; i ++) {
            if (this->list[this->length].getData() == this->list[i].getData()) {
                count ++;
                index = i;
            }
        }
        if(index == -1){
            this->list[this->length].incrFrequency(this->list[this->length].getData());
            this->length++;
        }
        else {
            this->list[index].incrFrequency(this->list[this->length].getData());
        }
    }else{
        this->list[this->length] = other;
        this->list[this->length].incrFrequency(this->list[this->length].getData());
        this->length++;
    };
    //this->list[this->length] = other;
    //this->length++;
}

string Book::toString() {
    ostringstream out;
    for (int i = 0; i < this->length; i ++) {
        out << this->list[i] << " ";
    }
    out << endl;
    out << "Capacity: " << this->capacity << endl;
    out << "Length: " << this->length << endl;
    return out.str();
}

void Book::orderWordsAlpha() {
    Word temp;
    bool swap;

    do {
        swap = false;

        for (int i = 0; i < (this->length-1); i ++) {
            if (this->list[i].getData() < this->list[i+1].getData()) {

                swap = false;
            }

            else {
                temp = this->list[i];
                this->list[i] = this->list[i + 1];
                this->list[i + 1] = temp;
                swap = true;
            }
        }
    } while(swap == true);
}

ostream& operator<<(ostream &out, Book &other) {

    out << "Alphabetically: " << endl;
    other.orderWordsAlpha();
    for(int i = 0; i < other.length; i++) {
        out << other.list[i].getData() ;
        out << "     " << other.list[i].getFrequency()<< endl;

    }
    out << endl;

    out << "Frequency: " << endl;
    other.orderWordsFreq();

    for(int i = 0; i < other.length; i++) {
        out << other.list[i].getData();
        out << "     " << other.list[i].getFrequency() << endl;
    }

    return out;
}

void Book::orderWordsFreq() {
    Word temp;
    bool swap;

    do {
        swap = false;

        for (int i = 0; i < (this->length-1); i ++) {
            if (this->list[i].getFrequency() > this->list[i+1].getFrequency()) {
                temp = this->list[i];
                this->list[i] = this->list[i + 1];
                this->list[i + 1] = temp;
                swap = true;
            }
        }
    } while (swap == true);
}