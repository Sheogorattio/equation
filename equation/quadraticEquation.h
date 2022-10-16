#pragma once
#include"baseEqation.h"
class quadraticEquation:public baseEquation
{
public:
	quadraticEquation();
	quadraticEquation(double _a, double _b, double _c) :baseEquation(_a, _b, _c) { }
	double* eqSolution();
};

