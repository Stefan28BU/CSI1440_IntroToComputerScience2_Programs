
#ifndef LAB9_CONTAINERIFC_H
#define LAB9_CONTAINERIFC_H

#include "SerializableIfc.h"
#include <string>

template <class T>
class ContainerIfc:public SerializableIfc {
public:
    class BadIndexException{};
    virtual ContainerIfc<T>& pushBack(T) = 0;
    virtual ContainerIfc<T>& popBack(T &) = 0;
    virtual int getSize() = 0;
    virtual bool isEmpty() = 0;
    virtual T&operator[](int) = 0;
    virtual string toString() = 0;
};



#endif //LAB9_CONTAINERIFC_H
