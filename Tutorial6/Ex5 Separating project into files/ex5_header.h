#pragma once
double surfaceAreaCalculation(double, double, double);

double surfaceAreaCalculation(double x, double y, double z)
{
	return 2 * x*y + 2 * x*z + 2 * y*z;
}