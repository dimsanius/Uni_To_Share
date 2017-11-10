#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int multiSquare[10][10];

	//outputting first row
	cout << setw(4) << " ";
	for (int i = 0; i < 10; i++)
	{
		cout << setw(4) << i + 1;
	}
	cout << endl;

	//outputiing data
	for (int i = 0; i < 10; i++)
	{
		cout << setw(4) << i + 1;

		for (int j = 0; j < 10; j++)
		{
			multiSquare[i][j] = (j+1)*(i+1);
			cout << setw(4) << multiSquare[i][j];
		}
		cout << endl;

	}
	system("pause");
	return 0;
}