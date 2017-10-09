#include <iostream>

using namespace std;

int main()
{
	char enteredVariable = ' ';
	do
	{
		cout << "Please, enter 'y' or 'Y': ";
		cin >> enteredVariable;
	} while (!(enteredVariable == 'y' || enteredVariable == 'Y'));

	cout << "You entered needed character, thanks." << endl;
	system("pause");
	return 0;
}
