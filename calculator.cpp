#include "calculator.h"

int Calculator::Add (doube a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}
