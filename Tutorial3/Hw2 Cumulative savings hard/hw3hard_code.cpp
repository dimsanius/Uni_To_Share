#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double savingsA = 25000;
	double savingsB = 25000;
	int year = 0;
	double existingDiff;

	while (savingsA > 0.005)
	{
		year++;
		savingsA *= 0.8;
		savingsB *= 1.08;
		existingDiff = savingsB / savingsA;
		if (existingDiff < 11.00)
			cout << "In the year " << year << ", price difference is " << fixed << setprecision(2) << existingDiff << ". \n \t Saver A has " << savingsA << ". \n\t Saver B has " << savingsB << endl;
	}
	system("pause");
	return 0;
}
