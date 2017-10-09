#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	double riceToday = 1;
	double totalRice = riceToday;
	//int cant handle so great values, so used variable type double
	int day = 1;
	while (day <= 64)
	{
		cout << "Day " << day << ": " << fixed << setprecision (0) << riceToday << " rice today, " << fixed << setprecision(0) << totalRice << " total rice so far." << endl;
		riceToday *= 2;
		totalRice += riceToday;
		day++;
	}
	system("pause");
	return 0;
}
