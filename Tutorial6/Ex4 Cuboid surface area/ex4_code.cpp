#include <iostream>

using namespace std;

double surfaceAreaCalculation(double, double, double);

int main()
{
	cout << "Surface area of a cuboid with dimensions 9.7x5.8x4.2 is: " << surfaceAreaCalculation(9.7, 5.8, 4.2) << endl;
	cout << "Surface area of a cuboid with dimensions 1.1x3.1x7.4 is: " << surfaceAreaCalculation(1.1, 3.1, 7.4) << endl;
	cout << "Surface area of a cuboid with dimensions 3.3x8.6x2.9 is: " << surfaceAreaCalculation(3.3, 8.6, 2.9) << endl;
	system("pause");
	return 0;
}

double surfaceAreaCalculation(double x, double y, double z)
{
	return 2 * x*y + 2 * x*z + 2 * y*z;
}