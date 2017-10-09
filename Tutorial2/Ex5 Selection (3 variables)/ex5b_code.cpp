#include <iostream>

using namespace std;

int main()
{
	//Activity 5(b)
	cout << "---------Activity 5(b)---------\n";
	int first_input, second_input, third_input;
	cout << "Enter first number: ";
	cin >> first_input;
	cout << "Enter second number: ";
	cin >> second_input;
	cout << "Enter third number: ";
	cin >> third_input;

	if (first_input != second_input)
	{
		cout << "First number " << first_input << " is different from the second number " << second_input << ".\n";
		if (first_input > second_input)
			cout << "First number " << first_input << " is more then second number " << second_input << ".\n";
		if (first_input < second_input)
			cout << "First number " << first_input << " is less then second number " << second_input << ".\n";
	}
	else if (first_input == second_input)
		cout << "First number " << first_input << " is equals the second number " << second_input << ".\n";


	if (first_input != third_input)
	{
		cout << "First number " << first_input << " is different from the third number " << third_input << ".\n";
		if (first_input > third_input)
			cout << "First number " << first_input << " is more then third number " << third_input << ".\n";
		if (first_input < third_input)
			cout << "First number " << first_input << " is less then third number " << third_input << ".\n";
	}
	else if (first_input == third_input)
		cout << "First number " << first_input << " is equals the third number " << third_input << ".\n";


	if (second_input != third_input)
	{
		cout << "Second number " << second_input << " is different from the third number " << third_input << ".\n";
		if (second_input > third_input)
			cout << "Second number " << second_input << " is more then third number " << third_input << ".\n";
		if (second_input < third_input)
			cout << "Second number " << second_input << " is less then third number " << third_input << ".\n";
	}
	else if (second_input == third_input)
		cout << "Second number " << second_input << " is equals the third number " << third_input << ".\n";
	system("pause");
	return 0;
}