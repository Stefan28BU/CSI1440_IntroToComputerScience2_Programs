

#ifndef LAB9_SERIALIZABLEIFC_H
#define LAB9_SERIALIZABLEIFC_H

#include <iostream>

using namespace std;

class SerializableIfc {
public:
    virtual void writeObject(ostream &) = 0;
    virtual void readObject(istream &) = 0;
};

#endif //LAB9_SERIALIZABLEIFC_H
