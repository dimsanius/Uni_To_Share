#include <iostream>

using namespace std;

int main() {
	int choice;
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
			int middleTree = 5;
			for (int i = 0; i <= 5; i++)
			{
				for (int j = 0; j < 40; j++)
				{
					if (j % 5 == 0 && j != 0)
						cout << "|";


					if (i > 0 && (j == middleTree-1 || j == middleTree))
					{
						cout << "*";
					}

					if( i > 1 && (j == middleTree+9 && j = middleTree+10))
					{
						cout << "*";
					}			

					for(int z = i*2; z<= 10)
					else

						cout << "-";
					
				}
				cout << endl;

			}

				
			
		





			//-----------------


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