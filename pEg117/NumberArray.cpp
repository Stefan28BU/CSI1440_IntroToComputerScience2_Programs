#include <iostream>
#include "NumberArray.h"

using namespace std;

NumberArray::NumberArray(int size, double value) {
    arraySize = size;
    aPtr = new double[arraySize];
    setValue(value);
}

NumberArray::NumberArray(const NumberArray &obj)
{
    arraySize = obj.arraySize;
    aPtr = new double[arraySize];
    for (int i = 0; i < arraySize; i ++)
    {
        aPtr[i] = obj.aPtr[i];
    }

}

void NumberArray::setValue(double value) {
    for(int i = 0; i < arraySize; i ++)
    {
        aPtr[i] = value;
    }

}
void NumberArray::print()
{
    for(int i = 0; i < arraySize; i ++)
    {
        cout << aPtr[i] << "  ";
    }
}