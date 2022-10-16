#include "quadraticEquation.h"

quadraticEquation::quadraticEquation()
{
	cout << "Quadratic equation's standart form is \nA(X)^2-BX+C=0\n Enter A, B, C:\t";
	cin >> a >> b >> c;
}

double* quadraticEquation::eqSolution()
{
	double D = (b * b - 4 * a * c);
	double* solution = new double[2];
	solution[0] = ((0 - b) + sqrt(D)) / (2 * a);
	solution[1] = ((0 - b) - sqrt(D)) / (2 * a);
	// << solution[0] << "\t" << solution[1];
	return solution;
}
