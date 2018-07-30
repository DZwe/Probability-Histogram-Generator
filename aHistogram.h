/*-----------------------
aHistogram.h
-----------------------*/

// Header file guard
#ifndef AHISTOGRAM_H
#define AHISTOGRAM_H

// Processor Directives
#include<iostream>
#include<iomanip>       // Enables the manipulation of cout.
using namespace std;

// Class declaration
class aHistogram
{
public:                    
	aHistogram();                              // Constructor
	~aHistogram();                             // Destructor
	void SetMax(int value);                    // Sets maximum value
	void Update(int face);                     // Updates a die face's bin
	void Display(int maxLengthOfLine) const;   // Display histogram with the specified x's
	int  Count(int face) const;                // Returns the number of times a face appeared
	void Clear();                              // Clear out all bins
	int  GetMax() const;					   // Returns the max value
	void NumX(int index);                      // Sets the number of x's
	void OneX(int maxLength);                  // Sets the number of one x
private:
	vector<int> counts;                        // The bins for the die faces
	int max;                                   // The max value
	int numX;                                  // The number of x's
	int x;                                     // The value of one x
};



#endif