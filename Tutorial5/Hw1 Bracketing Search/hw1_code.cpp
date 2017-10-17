#include <windows.h>
#include <iostream>
#include <time.h>

using namespace std;

void easyLevel();
void mediumLevel();
void hardLevel();


int main()
{
	int choice;

	//Generating random seed
	srand(time(0));
	while (true)
	{
		cout << "Enter difficulty of excercise:\n1. Easy\n2. Medium\n3. Hard\n0. Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			easyLevel();
			break;
		case 2:
			mediumLevel();
			break;

		case 3:
			hardLevel();
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

void easyLevel()
{
	
	int enteredNumber;
	int randomNumber = rand() % 100;
	int attempts = 0;

	cout << "I just generated a number between 0 and 100. Guess it!" << endl;
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

}

void mediumLevel()
{
	int userChoiceLessThan = 0;
	int randomNumber = rand() % 100;
	int upperBound = 100, lowerBound = 1;
	while (userChoiceLessThan != 2)
	{
		randomNumber = lowerBound + 1 + rand() % (upperBound - lowerBound);
		cout << "Is your number less than " << randomNumber << "?" << endl;
		cout << "0.) No\n1.) Yes\n2.) Guessed" << endl;
		cin >> userChoiceLessThan;

		if (userChoiceLessThan == 0)
		{
			lowerBound = randomNumber;

			if (upperBound == lowerBound)
			{
				cout << "Your number is " << lowerBound << endl;
				break;
			}
		}
		else
		{
			if (userChoiceLessThan == 1)
			{
				upperBound = randomNumber;
				if (upperBound == lowerBound)
				{

					cout << "Your number is " << lowerBound << endl;
					break;
				}
			}
			else
			{
				cout << "Hehe, your number is " << randomNumber << "." << endl;
				break;
			}
		}
	}

}

void hardLevel()
{
	int userChoice = 0;
	int lowerBound = 1, upperBound = 100;
	while (userChoice != 2)
	{

		cout << "Is your number less than " << (lowerBound + upperBound) / 2 << "?" << endl;
		cout << "0.) no\n1.) yes\n2.) guessed" << endl;
		cin >> userChoice;
		if (userChoice == 0)
		{
			lowerBound = (upperBound + lowerBound) / 2;
		}
		else
		{
			if (userChoice == 1)
			{
				upperBound = (lowerBound + upperBound) / 2;
			}
			else
			{
				cout << "Hehe, your number is " << (lowerBound + upperBound) / 2 << "." << endl;
				break;
			}
		}
	}
}