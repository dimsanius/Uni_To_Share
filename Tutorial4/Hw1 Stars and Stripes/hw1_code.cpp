#include <iostream>

using namespace std;

int main() {
	int choice;
	int stars = -1;
	while(true)
	{
		cout << "Choose level of excercise:\n1. Easy\n2. Medium\n3. Hard\n0. Exit" << endl;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			for (int i = 1; i <= 5; i++)
			{
				for (int y = 1; y <= i; y++)
					cout << "*";
					cout << endl;
			}	
			cout << endl;
			break;

		case 2:
			for (int i = 1; i <= 5; i++)
			{
				for (int y = 4 - i; y >= 0; y--)
					cout << "-";

				for (int y = i; y >= 1; y--)
					cout << "*";
				cout << endl;
			}
			cout << endl;
			break;

		case 3:

			//*----------------
			for (int i = 1; i <= 6; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (j % 2 == 0)
					{
						
								for(int k = 0; k < 6-i;k++)
									cout << "-";
									
								for (int b = 1; b < i; b++)
									cout << "*";

								cout << "|";
					}
					else
					{

						for (int b = 1; b < i; b++)
							cout << "*";

						for (int k = 0; k < 6 - i; k++)
							cout << "-";

						if(j < 7)
							cout << "|";
					}
				}
				cout << endl;
			}

			break;

		case 0:
			return 0;
			break;

		default:
			cout << "Incorrect number entered! please, try again" << endl;
			break;
		}
	}
	return 0;
}