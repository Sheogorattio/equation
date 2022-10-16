#include "linearEqation.h"

linearEquation::linearEquation()
{
    cout << "Linear eqation's standart form is \n AX + B = C\n Enter A, B, C:\t";
    cin >> a >> b >> c;
}

double* linearEquation::eqSolution()
{
    double* solution = new double;
    *solution = (c - b) / a;
    return solution;
}
