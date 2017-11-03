#include <iostream>
#include "Student.h"
#include <ctime>


using namespace std;



int main()
{
	srand(time(0));
	Student firstStudent;
	Student secondStudent;
	Student thirdStudent;

	int choice;

	while (true)
	{
		cout << "Enter your option\n 1. Easy\n 2. Medium\n 3. Hard\n 4. Very hard\n 0. Exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Greeting from one call: " << endl;
			cout << "\tFirst student greeting." << endl;
			firstStudent.greetCompletely();
			cout << "\tSecond student greeting." << endl;
			secondStudent.greetCompletely();
			cout << "\tThird student greeting." << endl;
			thirdStudent.greetCompletely();
			break;

		case 2:
			cout << "Greeting from three calls: " << endl;

			cout << "\tFirst student greeting 1st time" << endl;
			for(int i = 0; i < 3; i++)
				firstStudent.greet();
			cout << "\tFirst student greeting 2nd time" << endl;
			for (int i = 0; i < 3; i++)
				firstStudent.greet();

			cout << "\tSecond student greeting 1st time" << endl;
			for (int i = 0; i < 3; i++)
				secondStudent.greet();
			cout << "\tSecond student greeting 2nd time" << endl;
			for (int i = 0; i < 3; i++)
				secondStudent.greet();

			cout << "\tThird student greeting 1st time" << endl;
			for(int i = 0; i < 3; i++)
				thirdStudent.greet();
			cout << "\tThird student greeting 2nd time" << endl;
			for (int i = 0; i < 3; i++)
				thirdStudent.greet();
			break;

		case 3:
			secondStudent.meet(firstStudent);
			thirdStudent.meet(secondStudent);
			firstStudent.meet(thirdStudent);
			break;

		case 4:
			secondStudent.meetWithReply(firstStudent);
			thirdStudent.meetWithReply(secondStudent);
			firstStudent.meetWithReply(thirdStudent);
			break;

		case 0:
			return 0;
			break;

		default:
			cout << "Wrong option selected, please, try again" << endl;
			break;


		}
	}
	system("pause");
	return 0;
}