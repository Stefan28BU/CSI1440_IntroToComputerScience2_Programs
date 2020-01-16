/*
 * auther: Yufan Xu
 * assignment: project-3 1440
 * date due: 10/23/2017
 */

#ifndef INC_1440PJ3_CONTAINERIFC_PROJ3_H
#define INC_1440PJ3_CONTAINERIFC_PROJ3_H

#include <iostream>

using namespace std;

class BADINDEX {};

class ContainerIfc {
public:
    virtual ContainerIfc& pushFront(int) = 0;
    virtual ContainerIfc& pushBack(int) = 0;
    virtual ContainerIfc& popFront(int&) = 0;
    virtual ContainerIfc& popBack(int&) = 0;
    virtual int getSize() = 0;
    virtual bool isEmpty() = 0;
    virtual int front() = 0;
    virtual int back() = 0;
    virtual int& operator[](int) = 0;
};

#endif //INC_1440PJ3_CONTAINERIFC_PROJ3_H
