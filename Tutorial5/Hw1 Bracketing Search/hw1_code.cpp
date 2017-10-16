#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>


using namespace std;

int main()
{
	int choice;
	int attempts = 0;
	//Generating random seed
	srand(time(0));
	//Generating random number based on seed
	int randomNumber = rand() % 100;
	int userCommand = -1;
	int generatedNumber;
	int upperBound=100, lowerBound=1;
	int previoslyPressed=-1;
	int minBound = 1, maxBound = 100, userChoice = 0;

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
			while (userChoice != 2)
					{
						cout << "Is your number less than " << (minBound + maxBound) / 2 << "?" << endl;
						cout << "0.) no\n1.) yes\n2.) guessed" << endl;
						cin >> userChoice;

						if (userChoice == 0)
						{
							minBound = (maxBound + minBound) / 2;
						}
						else
						{
							if (userChoice == 1)
							{
								maxBound = (minBound + maxBound) / 2;
							}
							else
							{
								cout << "Hehe, your number is " << (minBound + maxBound) / 2 << "." << endl;
								break;
							}
						}
					}
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