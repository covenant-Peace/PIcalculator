#include "PICalculator.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

PICalculator::PICalculator()
{
	nTerms = 0;

	realPI = 3.1415926535897932;
}

void PICalculator::Calculate()
{
	calcPI = 0.0;
	double numerator = 4.0, denominator = 1.0;

	for (int i = 0; i < nTerms; i++)
	{
		calcPI = calcPI + numerator / denominator;
		denominator += 2.0;
		numerator = -1.0 * numerator;
	}
}

void PICalculator::AskNumterms()
{
	cout << "Enter number of terms for PI calculation: " << endl;
	cin >> nTerms;
	cin.ignore();

	Calculate();
	
}

void PICalculator::SetNumTerms(int nTerms)
{
	Calculate();
}

string PICalculator::GetResultsString()
{
	stringstream piString;
	piString.setf(ios::fixed);
	piString << "\n Results\n Number of terms: " << nTerms << setprecision(10) << " PI = " << realPI << " Calc PI " << calcPI << endl;

	return piString.str();
}
