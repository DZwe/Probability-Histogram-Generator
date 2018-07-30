/*----------------------------
functions.cpp
----------------------------*/

// Preprocessor directive
#include "functions.h"

/*---------------Function definitions---------------------*/

// A function that finds the max value in an array and returns the value
int FindMax(vector<int> vctrVals)
{
	int max = 0;

	for (int i = 0; i < vctrVals.size(); i++)
	{
		if (vctrVals.at(i) > max)
		{
			max = vctrVals.at(i);
		}
	}

	return max;
}

// A function that prints the histogram
void HistogramPrinter(vector<int> vctrVals, int start, int end, int &max)
{
	// Declare the variable for the number of x's and x
	int numX = 0;
	int x = 0;

	// Find the maximum occurence
	max = FindMax(vctrVals);

	// Find the value of one x
	x = max / 60;

	cout << " Histogram" << endl;
	cout << " ---------" << endl;

	for (int i = start; i <= end; i++)
	{
		numX = vctrVals.at(i) / x;
		printf("%2d ", i);

		for (int j = 1; j <= numX; j++)
		{
			cout << "x";
		}

		cout << endl;
	}

	return;
}