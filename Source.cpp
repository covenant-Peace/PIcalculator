#include "PICalculator.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	PICalculator peace;

	string result;

	cout << "\n Revisit the PI Calculation Program\n";
	int nTerms = 5000;
	peace.SetNumTerms(nTerms);

	result = peace.GetResultsString();

	cout << "\n We told peace to use 5000 terms: " << endl;
	cout << result;

	peace.AskNumterms();
	result = peace.GetResultsString();

	cout << result << endl;

	return 0;
	
}