#pragma once
#include"baseEqation.h"
class linearEquation:public baseEquation
{
public:
	linearEquation();
	linearEquation(double _a, double _b, double _c) :baseEquation(_a, _b, _c) { }
	double* eqSolution();
};

