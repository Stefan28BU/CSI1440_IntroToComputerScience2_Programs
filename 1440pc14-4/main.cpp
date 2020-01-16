/*
 * author: Yufan Xu
 * assignment: pc 14-4
 */

#include <iostream>

using namespace std;

int sumOfArray(int [], int);

int main()
{
    int total;
    int *array;

    cout << "Enter how many numbers you want to be added: ";
    cin  >> total;

    array = new int[total];

    if (total > 0) {
        cout << "Enter each numbers: " << endl;
        for (int i = 0; i < total; i++) {
            cin >> array[i];
        }

        cout << "The sum of these numbers is: "
             << sumOfArray(array, total) << endl;
    }
    else {
        cout << "No number needs to be added." << endl;
    }

    delete [] array;

    return 0;
}

int sumOfArray(int array[], int SIZE)
{
    int sum = 0;
    if (SIZE > 0) {
        sum = array[SIZE - 1] + sumOfArray(array, SIZE - 1);

        return sum;
    }

    else {
        return 0;
    }
}