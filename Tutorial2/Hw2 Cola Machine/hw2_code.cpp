#include <iostream>

using namespace std;

int main()
{
	//Activity HW 2
	cout << "---------HW 2---------\n";
	int choice;
	cout << "Time for break! Choose the beverage to have: \n1. Coke\n2. Water\n3. Sprite\n4. Tango\n5. Vimto\nEnter number of beverage to have: ";
	cin >> choice;
	switch (choice)
	{
	case 1: cout << "Good choice selecting coke!\n";
		break;
	case 2: cout << "Good choice selecting water!\n";
		break;
	case 3: cout << "Good choice selecting sprite!\n";
		break;
	case 4: cout << "Good choice selecting tango!\n";
		break;
	case 5: cout << "Good choice selecting vimto!\n";
		break;
	default: cout << "Error. choice was not valid, here is your money back.\n";
		break;
	}
	system("pause");
	return 0;
}