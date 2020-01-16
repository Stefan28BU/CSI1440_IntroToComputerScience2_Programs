/*
 * author: Yufan Xu
 * assignment: pc 14-2
 */

#include <iostream>
using namespace std;

void sign(int);

int main()
{
	int n;

	cout << "Enter a number: ";
	cin  >> n;

	sign(n);
}

void sign(int n)
{
	if (n > 0)
	{
		cout << "No Parking\n";
		sign(--n);
	}
}