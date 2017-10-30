#include <iostream>
#include "Student.h"
#include <ctime>


using namespace std;



int main()
{
	srand(time(0));
	Student firstStudent;
	cout << "First student greeting 1st time." << endl;
	firstStudent.greet();
	firstStudent.greet();
	firstStudent.greet();
	cout << "First student greeting 2nd time." << endl;
	firstStudent.greet();
	firstStudent.greet();
	firstStudent.greet();

	Student secondStudent;
	cout << "Second student greeting 1st time." << endl;
	secondStudent.greet();
	secondStudent.greet();
	secondStudent.greet();
	cout << "Second student greeting 2nd time." << endl;
	secondStudent.greet();
	secondStudent.greet();
	secondStudent.greet();

	secondStudent.meet(firstStudent);

	Student thirdStudent;
	cout << "Third student greeting 1st time." << endl;
	thirdStudent.greet();
	thirdStudent.greet();
	thirdStudent.greet();
	cout << "Third student greeting 2nd time." << endl;
	thirdStudent.greet();
	thirdStudent.greet();
	thirdStudent.greet();

	thirdStudent.meet(secondStudent);

	system("pause");
	return 0;
}