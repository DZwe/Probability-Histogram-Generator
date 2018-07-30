/*-----------------------
functions.h
-----------------------*/

// Header file guard
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Preprocessor directives
#include <iostream>
#include <vector>
using namespace std;

// Function declarations
int FindMax(vector<int> vctrVals);
void HistogramPrinter(vector<int> vctrVals, int start, int end, int &max);

#endif