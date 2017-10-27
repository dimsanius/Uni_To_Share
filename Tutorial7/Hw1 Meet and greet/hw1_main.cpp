#include <iostream>
#include "Student.h"
#include <ctime>


using namespace std;



int main()
{
	Student firstStudent;
	srand(time(0));
	Student secondStudent;
	srand(time(0));
	Student thirdStudent;

	firstStudent.greet();
	secondStudent.greet();
	thirdStudent.greet();

	system("pause");
	return 0;
}