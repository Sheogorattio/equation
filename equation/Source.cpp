#include<iostream>
#include"linearEqation.h"
#include"quadraticEquation.h"
using namespace std;

int main() {
	double* sol;
	linearEquation eq1 (-3, 6, 0);
	sol = eq1.eqSolution();
	cout << *sol << endl;
	delete sol;
	quadraticEquation eq2(4, 6, 0);
	sol = eq2.eqSolution();
	cout << sol[0] << "\t" << sol[1];
	delete[]sol;
}