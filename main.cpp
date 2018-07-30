/*-------------------------------
Project #2
Author: Zwe Phone Shein
----------------------------------*/

// Preprocessor directives
#include <iostream>
#include <vector>        // Enables the use of vectors
#include <cstdlib>       // Enables the use of rand()
#include <ctime>         // Enables the use of time()
#include "aHistogram.h"  // Include the aHistogram class
#include "aDie.h"        // Include the aDie class

using namespace std;

int main()
{
	// Variable Declarations
	int num = 0;
	int maxLength;
	int seed;
	bool again = true;

	// Create the die and histogram objects.
	aDie die;
	aHistogram histogram;

	// A loop that keeps running until the user decides to stop.
	do
	{
		// Prompt the user for the amount of die rolls
		cout << "How many rolls? ";
		cin >> num;
		cout << endl;

		// Prompt the user for seed value.
		cout << "Input seed value. Enter 0 to seed time: ";
		cin >> seed;
		cout << endl;

		// Enter the user-specified seed or otherwise seed time.
		if (seed == 0)
		{
			srand(time(0));     // Seeds the random number generator with current time
		}
		else
		{
			srand(seed);        // Seeds the random number generator with given value
		}

		// Prompt the user for the maximum length of x's to print
		cout << "Enter the max length of x's to print in histogram: ";
		cin >> maxLength;
		cout << endl;


		// Rolls the dice for a given amount of time and 
		// stores the distribution of the die in a vector
		for (int i = 0; i < num; i++)
		{
			histogram.Update(die.Roll());
		}

		// Calculate the maximum value in the bins
		histogram.SetMax(0);  
		for (int i = 1; i < 7; i++)
		{
			if (histogram.Count(i) > histogram.GetMax())
			{
				histogram.SetMax(histogram.Count(i));
			}
		}
		
		// Calculate the value of one x.
		histogram.OneX(maxLength);

		// Print the distribution of the die faces and the histogram
		cout << " The number of times each face of a die appear" << endl;
		cout << " ---------------------------------------------" << endl;
		
		for (int i = 1; i <= 6; i++)
		{
			histogram.NumX(i);        // Calculate the number of x's
			cout << setw(2) << i << setw(2) << ": " << histogram.Count(i) << " ";
			histogram.Display(maxLength);  // Print the x's
		}
		cout << endl;

		// Prompt the user whether he/she wants to run again
		cout << "Do you want to roll again? <1 for yes, 0 for no>: ";
		cin  >> again;
		cout << endl;
		 
		// If yes, clear the bin and restart the program
		if (again == true)
		{
			histogram.Clear();
		}

	} while (again == true);
	
	return 0;
}


