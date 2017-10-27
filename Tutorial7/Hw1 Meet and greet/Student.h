#pragma once

#include <string>
class Student
{

private:
	std::string name;
	int age;
	std::string favouriteColor;
public:
	Student();
	~Student();
	void greet();
};

