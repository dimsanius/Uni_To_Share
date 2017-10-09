// tutorial2_ex1.cpp : Defines the entry point for the console application.
//


#include <iostream>

using namespace std;
void activity_1();
void activity_2();
void activity_3();
void activity_4();
void activity_5a();
void activity_5b();
void activity_hw1();
void activity_hw2();

int main()
{
	int activity;
	cout << "Hello world!!! \n";
	while (true)
	{
		cout << "\n===========================================\nList of activities:\n===========================================\n";
		cout << "1. Output variables\n2. Input\n3. Multiple inputs\n4. Scope\n5. Selection - part A\n6. Selection - part B\n7. HW1 - Grading Program\n8. HW2 - Cola Machine\n0. Exit";
		
		cout << "\nChoose activity to show: ";
		cin >> activity;
		cout << "\n____________________________________________\n";
		switch (activity)
		{
		case 1: activity_1();
			cout << "____________________________________________\n";
			break;
		case 2: activity_2();
			cout << "____________________________________________\n";
			break;
		case 3: activity_3();
			cout << "____________________________________________\n";
			break;
		case 4: activity_4();
			cout << "____________________________________________\n";
			break;
		case 5: activity_5a();
			cout << "____________________________________________\n";
			break;
		case 6: activity_5b();
			cout << "____________________________________________\n";
			break;
		case 7: activity_hw1();
			cout << "____________________________________________\n";
			break;
		case 8: activity_hw2();
			cout << "____________________________________________\n";
			break;
		case 0: return 0;
			break;
		default: cout << "Invalid number entered!";
		}

	}
	system("pause");
    return 0;
}

void activity_1()
{
	//Activity 1
	cout << "---------Activity 1---------\n";
	int var;
	var = 5;	//if variable is not initialized, it pops up with error. Error code :The variable 'var' is being used without being initialized.
	var++;
	cout << "Value of var variable: " << var;
	cout << "\n";
}

void activity_2()
{
	//Activity 2
	cout << "---------Activity 2---------\n";
	int var;
	cout << "Now, input value of variable: ";
	cin >> var;
	cout << "Well done! You input " << var;
	cout << "\n";
}

void activity_3()
{
	//Activity 3
	cout << "---------Activity 3---------\n";
	int var;
	cout << "Let's do some math!\n";
	int result = 1;
	for (int i = 1; i < 4; i++)
	{
		cout << "Enter " << i << " variable: ";
		cin >> var;
		result *= var;
	}
	cout << "Result of all numbers multiplied is: " << result;
	cout << "\n";
}

void activity_4()
{
	//Activity 4
	cout << "---------Activity 4---------\n";
	int local = 3;
	{
		cout << local << endl;
		int local = 4;
		cout << local << endl;
	}
	cout << local << endl;
}

void activity_5a()
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
}

void activity_5b()
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
}

void activity_hw1()
{
	//Activity HW 1
	cout << "---------HW 1---------\n";
	int score;
	cout << "Enter a grade you scored in a programming class: ";
	cin >> score;
	//checking the range of score
	if (score > 100 || score < 0)
	{
		cout << "Invalid score entered!. Please, enter again!\n";
		while (true)
		{
			cout << "Enter a grade you scored in a programming class: ";
			cin >> score;
			if (score <= 100 && score > 0)
				break;
			else
				cout << "Invalid score entered!. Please, enter again!\n";
		}
	}

	if (score == 100)
		cout << "Congratulations! You got the perfect score!!!\n";
	if (score < 100 && score >= 90)
		cout << "Congratulations! You got A grade!\n";
	if (score <= 89 && score >= 80)
		cout << "You got B grade!\n";
	if (score <= 79 && score >= 70)
		cout << "You got C grade!\n";
	if (score <= 69 && score >= 60)
		cout << "You got D grade!\n";
	if (score <= 59 && score >= 0)
		cout << "You got D grade!\n";
}

void activity_hw2()
{
	//Activity HW 2
	cout << "---------HW 2---------\n";
	int choice;
	cout << "Time for break! Choose the beverage to have: \n1. Coke\n2. Water\n3. Sprite\n4. Tango\n5. Vimto\nEnter number of beverage to have: ";
	cin >> choice;
	switch (choice)
	{
	case 1: cout << "Good choice selecting coke!\n";
		break;
	case 2: cout << "Good choice selecting water!\n";
		break;
	case 3: cout << "Good choice selecting sprite!\n";
		break;
	case 4: cout << "Good choice selecting tango!\n";
		break;
	case 5: cout << "Good choice selecting vimto!\n";
		break;
	default: cout << "Error. choice was not valid, here is your money back.\n";
		break;
	}
}