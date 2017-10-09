#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double savingsA = 1000;
	double savingsB = 500;
	int year = 0;
	while (savingsB < savingsA)
	{
		year++;
		cout << "Year " << year << " total savings: " << endl;
		savingsA *= 1.015;
		savingsB *= 1.045;
		cout << "\tSaver A: " << fixed << setprecision(2) << savingsA << endl;
		cout << "\tSaver B: " << fixed << setprecision(2) << savingsB << endl << endl;
	}
	system("pause");
	return 0;
}
