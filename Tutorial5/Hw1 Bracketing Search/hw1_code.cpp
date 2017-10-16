#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;

int main()
{
	int choice;
	int attempts = 0;
	//Generating random seed
	srand(time(0));
	//Generating random number based on seed
	int randomNumber = rand() % 100;
	while (true)
	{
		cout << "Enter difficulty of excercise:\n1. Easy\n2. Medium\n3. Hard\n0. Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "I just generated a number between 0 and 100. Guess it!" << endl;
			int enteredNumber;
			do
			{
				cout << "Enter your guess: ";
				cin >> enteredNumber;
				attempts++;
				if (enteredNumber > randomNumber)
					cout << "Entered number too high." << endl;

				if (enteredNumber < randomNumber)
					cout << "Entered number too low." << endl;

			} while (enteredNumber != randomNumber);
			cout << "You guessed the number! Congratulations! It took you " << attempts << " attempts to guess." << endl;
			break;
		case 2:

			break;

		case 0:
			return 0;

		default:
			cout << "Incorrect number entered. Please, try again." << endl;
			break;
		}

	}





	system("pause");
	return 0;
}