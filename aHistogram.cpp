/*----------------------------
aHistogram.cpp
----------------------------*/

//Preprocessor directives
#include <iostream>
#include <vector>
using namespace std;

// Include the header file
#include "aHistogram.h"

//------- Class Definitions----------//

// Constructor
aHistogram::aHistogram() : counts(7)
{
	max = 0;
	numX = 0;
	x = 0;
	return;
}

// Destructor
aHistogram::~aHistogram()
{
	cout << "Destructor called." << endl;
	return;
}

// Returns the number of times a die face appeared
int aHistogram::Count(int face) const
{
	return counts.at(face);
}

// Update the specified die face's bin
void aHistogram::Update(int face)
{
	counts.at(face)++;
	return;
}

// Display the histogram with the specified number of x's
void aHistogram::Display(int maxLengthOfLine) const
{
	for (int j = 0; j < numX; j++)
	{
		cout << "x";
	}

	cout << endl;
	return;
}

// Sets the maximum value.
void aHistogram::SetMax(int value)
{
	max = value;
	return;
}

// Clears all the values in bins.
void aHistogram::Clear()
{
	for (int i = 1; i < 7; i++)
	{
		counts.at(i) = 0;
	}
	return;
}

// Returns the max value.
int aHistogram::GetMax() const
{
	return max;
}

// Sets the value of x
void aHistogram::OneX(int maxLength)
{
	x = GetMax() / maxLength;
	return;
}

// Sets the value of numX
void aHistogram::NumX(int index)
{
	numX = Count(index) / x;
	return;
}
