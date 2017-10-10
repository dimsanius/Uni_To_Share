#include <iostream>

using namespace std;


int main()
{
	char option;
	while (true)
	{
		cout << "Menu of counters:\n a. Counter from 1 to 100 is steps of 1\n b. Counter from 100 to 1 in steps of -1\n c. Counter from 7 to 77 in steps of 7\n d. Counter from 121 to -11 in steps of -11\n e. Exit" << endl;
		cout << "Enter the option you want: ";
		cin >> option;

		switch (option)
		{
		case 'a':
		case 'A':
			cout << "From 1 to 100 in steps of 1:" << endl;
			for (int i = 1; i <= 100; i++)
				cout << "\tStep number " << i << endl;
			break;

		case 'b':
		case 'B':
			cout << "From 100 to 1 in steps of -1: " << endl;
			for (int i = 100; i > 0; i--)
				cout << "\tStep number " << i << endl;
			break;

		case 'c':
		case'C':
			cout << "From 7 to 77 in steps of 7: " << endl;
			for (int i = 7; i <= 77; i += 7)
				cout << "\tStep number " << i << endl;
			break;

		case 'd':
		case 'D':
			cout << "From 121 to -11 in steps of -11: " << endl;
			for (int i = 121; i >= -11; i -= 11)
				cout << "\tStep number " << i << endl;
			break;
		case 'e':
		case 'E':
			return 0;
			break;

		default: 
			cout << "Letter not recognized, try again, please." << endl;
			break;
		}
	}

	system("pause");
	return 0;
}