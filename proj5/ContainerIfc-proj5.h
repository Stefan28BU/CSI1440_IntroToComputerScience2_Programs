//
// Created by 徐宇帆 on 17/11/10.
//

#ifndef PROJ5_CONTAINERIFC_PROJ5_H
#define PROJ5_CONTAINERIFC_PROJ5_H

#include <iostream>

using namespace std;

class BADINDEX{};

template<class T>
class ContainerIfc {
public:
    virtual ContainerIfc <T>& pushFront(T) = 0;
    virtual ContainerIfc <T>& pushBack(T) = 0;
    virtual ContainerIfc <T>& popFront(T&) = 0;
    virtual ContainerIfc <T>& popBack(T&) = 0;
    virtual int getSize() = 0;
    virtual bool isEmpty() = 0;
    virtual T front() = 0;
    virtual T back() = 0;
    virtual T&operator[] (int) = 0;
};

#endif //PROJ5_CONTAINERIFC_PROJ5_H
