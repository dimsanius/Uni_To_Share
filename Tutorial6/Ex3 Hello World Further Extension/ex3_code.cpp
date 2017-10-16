#include <iostream>

using namespace std;

int helloWorld(int, int);

int main()
{
	int firstNumber, secondNumber;

	cout << "Enter first number: ";
	cin >> firstNumber;

	cout << "Enter second number: ";
	cin >> secondNumber;

	cout << "The subtraction is: " << helloWorld(firstNumber, secondNumber) << endl;
	system("pause");
	return 0;
}

int helloWorld(int firstNumberFunction, int secondNumberFunction)
{
	cout << "Hello World! Making Calculations..." << endl;
	return firstNumberFunction - secondNumberFunction;
}