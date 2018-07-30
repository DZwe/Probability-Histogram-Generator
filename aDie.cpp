/*----------------------------
aDie.cpp
----------------------------*/

// Preprocessor directive
#include <iostream>
using namespace std;

// Include the header file
#include "aDie.h"

//------------Class Definitions------------//

// Default constructor 
aDie::aDie()
{
	return;
}

// Destructor
aDie::~aDie()
{
	cout << "Destructor called." << endl;
	return;
}

// Rolls the die and returns the face it gets.
int aDie::Roll() const
{
	return ((rand() % 6) + 1);
}

