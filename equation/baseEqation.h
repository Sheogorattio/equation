#pragma once
#include <iostream>
using namespace std;
class baseEquation
{
protected:
	double a, b, c;
public:
	baseEquation() = default;
	baseEquation(double _a, double _b, double _c) {
		a = _a;
		b = _b;
		c = _c;
	}
	virtual double* eqSolution() = 0;
};

