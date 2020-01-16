/*
 * author: Yufan Xu
 * assignment: pc 14-1
 */

#include <iostream>

using namespace std;

int getFactorial(int);

int main()
{
    int number;

    cout << "Enter an integer: ";
    cin  >> number;
    cout << "The factorial of " << number << ": "
         << getFactorial(number) << endl;

    return 0;
}

int getFactorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;

    }
    return fact;
}