#include <iostream>

using namespace std;

void sayHello(int);
int productOfTwoInts(int, int);
int half(int);

int main()
{
	int choice;
	int timesToLoop;
	int firstNumber, secondNumber;
	int numberToDivide;

	while (true)
	{
		cout << "Select excercise difficulty:\n1. Easy\n2. Medium\n3. Hard\n0. Exit" << endl;
		cin >> choice;
		switch(choice)
		{
		case 1:
			cout << "How many times to loop? " << endl;
			cin >> timesToLoop;
			sayHello(timesToLoop);
			break;

		case 2:
			cout << "Type in your first preferrable number: ";
			cin >> firstNumber;
			cout << "Type in your second preferrable number: ";
			cin >> secondNumber;
			cout << "Product of two numbers is: " << productOfTwoInts(firstNumber, secondNumber) << endl;
			break;

		case 3:
			cout << "Type in number to halve:";
			cin >> numberToDivide;
			half(numberToDivide);
			break;

		case 0 :
			return 0;
			break;


		default:
			cout << "Invalid number entered. Please, try again!" << endl;
			break;
		}

	}

	system("pause");
	return 0;
}

void sayHello(int times)
{
	for(int i = 0; i < times; i++)
	cout << "Hello!" << endl;
}

int productOfTwoInts(int a, int b)
{
	return a * b;
}

int half(int numberWeAreDividing)
{
	cout << numberWeAreDividing << ", ";
	numberWeAreDividing /= 2;
	if (numberWeAreDividing > 1)
		return half(numberWeAreDividing);
	else
	{	
		return numberWeAreDividing;
	}
}