#include <iostream>

using namespace std;

int main()
{
	int enteredNumber;
	int counter = 0;
	do
	{
		if (counter == 10)
		{
			cout << "Enough! You Won!" << endl;
			system("pause");
			return 0;
		}
			
		counter++;
		cout << "Please, enter any number apart of " << counter << endl;
		cin >> enteredNumber;
		
	} while (!(enteredNumber == counter));

	cout << "I am surprised... You entered the number i asked not to enter!" << endl;
	system("pause");
	return 0;
}
