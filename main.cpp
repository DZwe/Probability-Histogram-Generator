/*-------------------------------
Project #1
Author: Zwe Phone Shein
----------------------------------*/

// Preprocessor directives
#include <iostream>
#include <vector>       // Enables the use of vectors
#include <cstdlib>      // Enables the use of rand()
#include "functions.h"  // Enables the use of custom functions

using namespace std;

int main()
{
	// Variable Declarations
	int num = 0;
	int temp = 0;
	int max = 0;
	int x = 0;
	int numX = 0;
	int seed = 0;

	// Prompt the user
	cout << "How many rolls? ";
	cin  >> num;
	cout << "Enter seed value: ";
	cin  >> seed;
	cout << endl;

	srand(seed);     // "Seeds" the random number generator

	// Create vectors
	vector<int> counts(7);
	vector<int> sum(13);

	// Rolls the dice for a given amount of time and 
	// stores the distribution of the die in a vector
	for (int i = 0; i < num; i++)
	{
		temp = ((rand() % 6) + 1);
		counts.at(temp)++;
	}

	// Print the distribution of the die faces
	cout << " The number of times each face of a die appear" << endl;
	cout << " ---------------------------------------------" << endl;

	for (int i = 1; i <= 6; i++)
	{
		cout << " " << i << " ----- " << counts.at(i) << endl;
	}
	cout << endl;

	// Prints the histogram 
	HistogramPrinter(counts, 1, 6, max);
	cout << endl;

	// Rolls two dice, adds their sum and stores it in a vector
	for (int i = 0; i < num; i++)
	{
		temp = ((rand() % 6) + 1) + ((rand() % 6) + 1);
		sum.at(temp)++;
	}

	// Print the distribution of sums
	cout << " The sums acheived when rolling two dice" << endl;
	cout << " ---------------------------------------" << endl;

	for (int i = 2; i <= 12; i++)
	{
		printf("%2d ----- %d\n", i, sum.at(i));
	}
	cout << endl;

	// Prints the histogram
	HistogramPrinter(sum, 2, 12, max);
	cout << endl;

	return 0;
}

