#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	double rice_everyday = 1;
	double total_rice = rice_everyday;
	//int cant handle so great values, so used variable type double
	int counter = 1;
	while (counter <= 64)
	{
		cout << "Day " << counter << ": " << fixed << setprecision (0) << rice_everyday << " rice today, " << fixed << setprecision(0) << total_rice << " total rice so far." << endl;
		rice_everyday *= 2;
		total_rice += rice_everyday;
		counter++;
	}
	system("pause");
	return 0;
}
