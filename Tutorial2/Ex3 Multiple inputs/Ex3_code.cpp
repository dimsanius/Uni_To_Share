#include <iostream>

using namespace std;

int main()
{
	//Activity 3
	cout << "---------Activity 3---------\n";
	int var;
	cout << "Let's do some math!\n";
	int result = 1;
	for (int i = 1; i < 4; i++)
	{
		cout << "Enter " << i << " variable: ";
		cin >> var;
		result *= var;
	}
	cout << "Result of all numbers multiplied is: " << result;
	cout << "\n";
	system("pause");
	return 0;
}