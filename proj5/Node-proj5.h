//
// Created by 徐宇帆 on 17/11/10.
//

#ifndef PROJ5_NODE_PROJ5_H
#define PROJ5_NODE_PROJ5_H


#include <iostream>

using namespace std;

template <class T>

class Node{
public:
    T data;
    Node<T> *next;
   /* Node(T e) {
        data = e;
        next = NULL;
    }
    */

};


#endif //PROJ5_NODE_PROJ5_H
