#pragma once

#include <string>

using namespace std;

#ifndef _PICALC_H
#define _PICALC_H


class PICalculator
{
private:
	int nTerms;
	double calcPI, realPI;

	void Calculate();
public:
	PICalculator();

	void AskNumterms();

	void SetNumTerms(int nTerms);
	double GetRealPI()
	{
		return realPI;
	}
	double GetCalcPI()
	{
		return calcPI;
	}
	string GetResultsString();
};

#endif _PICALC_H