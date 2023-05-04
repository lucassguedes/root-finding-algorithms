#ifndef _ZERO_APPROX_H
#define _ZERO_APPROX_H

#include <cmath>
#include <iostream>

typedef double (*single_variable_function)(double x);
 

double newton(double x0, single_variable_function f, single_variable_function df, double tol, int max);


double bisection(single_variable_function f, double a, double b, double tol, int N);


#endif 