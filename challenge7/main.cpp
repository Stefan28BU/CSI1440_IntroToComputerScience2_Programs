/*
 * author: Yufan Xu
 * assignment: program challenge 7
 * date created: 08/29/2017
 * due date: 08/31/2017
 * description: this program will ask user for number of students are
 *              surveyed and them the number of movies they watch per
 *              month, then the program will come out with the average,
 *              median, mode of these data
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getMedian(int *, int);
int getMode(int *, int);
void selectionSort(int *, int);

int main()
{
	int *movies = nullptr;
    int studNum, mode;
	double average, median;
    double sum = 0.0;

	//prompt user for number of students
	cout << "Enter the number of students are surveyed: ";

    //user input
	cin	 >> studNum;

    //memory allocation
	movies = new int[studNum];

    //prompt user for movies each of them watched
    cout << "Enter the number of movies each student has seen in the month.\n";

    //user input
    for (int i = 0; i < studNum; i++)
    {
        cin  >> movies[i]; // or *(Movies + i)
    }

    //call sort function
	selectionSort(movies, studNum);

    //call median function
    median = getMedian(movies, studNum);

    //call mode function
	mode = getMode(movies, studNum);

    //get total number of movies
    for (int i = 0; i < studNum; i++)
    {
        sum += *(movies +i);
    }

    //get average
    average = sum / studNum;

    //show two decimal places
	cout << fixed << showpoint << setprecision(2);

    //print result
	cout << "The average is: " << average << endl;
	cout << "The median is:  " << median << endl;
	cout << "The mode is:    " << mode << endl;

    //clear memory location
	delete [] movies;
	movies = nullptr;

	return 0;
}

//get median
double getMedian(int *array, int size)
{
    int middle = (size - 1) / 2;
    double medianNum;

    if (size % 2 == 0)
    {
        medianNum = (*(array + middle) + *(array + (middle + 1))) / 2;
    }
    else
    {
        medianNum = *(array + middle);
    }

    return medianNum;
}

//get mode
int getMode(int *array, int size)
{
    int mode, count = 0, most = 0;

    for (int i = 0; i < size; i++)
    {
        count++;
        if (*(array + i) < *(array + i + 1))
        {
            if (count > most)
            {
                mode = *(array + i);
                most = count;
            }
            count = 0;
        }
    }
    return mode;
}

//sorting function
void selectionSort(int *array, int size)
{
	int startScan, minIndex, minValue;

	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = *(array + startScan);

		for (int i = startScan + 1; i < size; i++)
		{
			if (*(array + i) < minValue)
			{
				minValue = *(array + i);
				minIndex = i;
			}
		}
		*(array + minIndex) = *(array + startScan);
		*(array + startScan) = minValue;
	}
}
