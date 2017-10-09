#include <iostream>

using namespace std;

int main()
{
	//Activity 5(a)
	cout << "---------Activity 5(a)---------\n";
	int first_input, second_input;
	cout << "Enter first number: ";
	cin >> first_input;
	cout << "Enter second number: ";
	cin >> second_input;

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
	system("pause");
	return 0;
}