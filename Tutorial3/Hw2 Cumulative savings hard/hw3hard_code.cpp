#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double savingsA = 25000;
	double savingsB = 25000;
	int year = 0;
	double neededDiff = 2;
	double existingDiff = 1;
	while (savingsA > 0.005)
	{
		year++;
		//cout << "Year " << year << " total savings: " << endl;
		savingsA *= 0.8;
		savingsB *= 1.08;
		//cout << "\tSaver A: " << fixed << setprecision(2) << savingsA << endl;
		//cout << "\tSaver B: " << fixed << setprecision(2) << savingsB << endl << endl;

		existingDiff = savingsB / savingsA;
		cout << fixed << setprecision(0) << existingDiff << endl;
		if (existingDiff == neededDiff && neededDiff < 11)
		{
			cout << "Price difference is " << neededDiff << ". And the year is " << year << endl;
			neededDiff++;
		}
	}
	system("pause");
	return 0;
}
