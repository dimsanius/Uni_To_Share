#include <iostream>
#include "Student.h"
#include <ctime>


using namespace std;



int main()
{
	Student firstStudent;
	Student secondStudent;
	Student thirdStudent;

	firstStudent.greet();
	secondStudent.greet();
	thirdStudent.greet();

	system("pause");
	return 0;
}