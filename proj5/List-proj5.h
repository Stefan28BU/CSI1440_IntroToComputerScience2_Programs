/*
 * author: Yufan Xu
 * assignment: CSI 1440 Project 5
 * date due: 11/20/2017
 */

#ifndef PROJ5_LIST_PROJ5_H
#define PROJ5_LIST_PROJ5_H

#include <iostream>
#include <sstream>
#include <string>
#include "Node-proj5.h"
#include "ContainerIfc-proj5.h"

using namespace std;

template<class T>

class List : public ContainerIfc<T> {
public:
    List();

    ~List();

    List(const List &);

    List<T> &operator=(List &);

    List<T> &pushFront(T);

    List<T> &pushBack(T);

    List<T> &popFront(T &);

    List<T> &popBack(T &);

    int getSize();

    bool isEmpty();

    T front();

    T back();

    T &operator[](int);

    void toString(ostream &out);

    string toString1();

    void print();

private:
    Node<T> *head;
};

template<class T>
List<T>::List() {
    head = NULL;
}

template<class T>
List<T>::~List() {
    Node<T> *temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
}

template<class T>
List<T>::List(const List &that) {
    //head = NULL;
    if (that.head != NULL) {
        //head = new Node<T>(that.head->data);
        head = new Node<T>;
        head->data = that.head->data;
        head->next = NULL;

        Node<T> *temp = head;
        Node<T> *tempOther = that.head->next;

        while (tempOther != NULL) {
            //temp->next = new Node<T>(tempOther->data);
            temp->next = new Node<T>;
            temp->next->data = tempOther->data;
            temp->next->next = NULL;
            temp = temp->next;
            tempOther = tempOther->next;
        }
    }
}

template<class T>
List<T> &List<T>::operator=(List &that) {
    Node<T> *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    if (that.head != NULL) {
        //head = new Node<T>(that.head->data);
        head = new Node<T>;
        head->data = that.head->data;
        head->next = NULL;
        Node<T> *temp = head;
        Node<T> *tempOther = that.head->next;

        while (tempOther != NULL) {
            //temp->next = new Node<T>(tempOther->data);
            temp->next = new Node<T>;
            temp->next->data = tempOther->data;
            temp->next->next = NULL;
            temp = temp->next;
            tempOther = tempOther->next;
        }
    }

    return *this;
}

template<class T>
List<T> &List<T>::pushFront(T e) {
    //Node<T> *temp = new Node<T>(e);
    Node<T> *temp = new Node<T>;
    temp->data = e;
    temp->next = NULL;
    temp->next = head;
    head = temp;

    //return *this;
}

template<class T>
List<T> &List<T>::pushBack(T e) {

    if (this->head == NULL) {
        //this->head = new Node<T>(e);
        head = new Node<T>;
        head->data = e;
        head->next = NULL;
    } else {
        Node<T> *temp = this->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        //temp->next = new Node<T>(e);
        temp->next = new Node<T>;
        temp->next->data = e;
        temp->next->next = NULL;
    }

    //return *this;
}

template<class T>
List<T> &List<T>::popBack(T &e) {

    if (isEmpty()) {
        throw BADINDEX();
    }
    if (head->next == NULL) {
        e = head->next->data;
        delete head;
        this->head = NULL;
    } else if (head != NULL) {

        Node<T> *temp = head;
        Node<T> *old;
        while (temp->next != NULL) {
            old = temp;
            temp = temp->next;
        }
        old->next = NULL;
        e = temp->data;
        delete temp;
    }
}

template<class T>
List<T> &List<T>::popFront(T &e) {

    if (isEmpty()) {
        throw BADINDEX();
    }

    e = head->data;
    Node<T> *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

template<class T>
int List<T>::getSize() {
    int size = 0;
    Node<T> *temp = head;

    while (temp != NULL) {
        size++;
        temp = temp->next;

    }
    return size;
}

template<class T>
bool List<T>::isEmpty() {
    return head == NULL;
}

template<class T>
T List<T>::front() {

    if (isEmpty()) {
        throw BADINDEX();
    }
    return head->data;
}

template<class T>
T List<T>::back() {
    if (isEmpty()) {
        throw BADINDEX();
    }

    Node<T> *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    return temp->data;
}

template<class T>
T &List<T>::operator[](int ndx) {
    if (isEmpty() || ndx < 0 || ndx >= getSize()) {
        throw BADINDEX();
    }

    Node<T> *temp = head;
    int i = 0;

    while (i < ndx) {
        temp = temp->next;
        i++;
    }
    return temp->data;
}

template<class T>
void List<T>::toString(ostream &out) {
    Node<T> *temp = head;

    while (temp != NULL) {
        out << temp->data << "  ";
        temp = temp->next;
    }
}


template<class T>
string List<T>::toString1() {
    ostringstream out;
    Node<T> *temp = head;

    while (temp != NULL) {
        out << temp->data << "  ";
        temp = temp->next;
    }
    out << endl;

    return out.str();

}


template<class T>
void List<T>::print() {
    Node<T> *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


#endif //PROJ5_LIST_PROJ5_H
