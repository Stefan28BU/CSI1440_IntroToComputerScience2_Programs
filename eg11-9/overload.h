#include <iostream>

using namespace std;

class NumberArray
{
private:
    double *aPtr;
    int arraySize;
public:
    NumberArray& operator =(const NumberArray &right);

    NumberArray(const NumberArray &);
    NumberArray(int size, double value);
    ~NumberArray(){if (arraySize > 0) delete[]aPtr;}
    void print();
    void setValue(double value);
};