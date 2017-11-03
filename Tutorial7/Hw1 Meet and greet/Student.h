#pragma once

#include <string>
class Student
{

private:
	std::string name;
	int age;
	std::string favouriteColor;
	int timesCalled = 0;
public:
	Student();
	~Student();
	void greet();
	void greetCompletely();
	std::string getName();
	void meet(Student);
	void meetWithReply(Student);
};

