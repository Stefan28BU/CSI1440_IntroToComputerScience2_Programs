#include <iostream>
#include "overload.h"

using namespace std;


NumberArray& NumberArray::operator=(const NumberArray &right) {
    if (this !=&right)
    {
        if (arraySize >0)
        {
            delete [] aPtr;
        }

        arraySize = right.arraySize;
        aPtr = new double[arraySize];
        for (int i = 0; i <arraySize;  i++)
        {
            aPtr[i] = right.aPtr[i];
        }
    }
    return  *this;

}

NumberArray::NumberArray(int size1, double value) {
    arraySize = size1;
    aPtr = new double[arraySize];
    setValue(value);
}

void NumberArray::setValue(double value) {
    for (int i = 0; i < arraySize; i ++)
    {
        aPtr[i] = value;
    }
}

void NumberArray::print() {
    for (int i = 0; i < arraySize; i ++)
    {
        cout << aPtr[i] << "  ";
    }
}