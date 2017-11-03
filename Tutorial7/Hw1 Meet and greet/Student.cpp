#include "Student.h"
#include <string>
#include <ctime>
#include <iostream>
#include <cstdlib> 

Student::Student()
{
	//setting random name from a pull of 10
	std::string POSSIBLENAMES[10] = { 
		"John" , 
		"Bob", 
		"Michael", 
		"Rochelle", 
		"William", 
		"Albany", 
		"Alcott", 
		"Alden", 
		"Baines", 
		"Baker"};
	int randomNumber = rand() % 10;
	name = POSSIBLENAMES[randomNumber];

	//setting random fav color from a pull of 10
	randomNumber = rand() % 10;
	std::string POSSIBLEFAVCOLORS[10] = { 
		"Red", 
		"Green", 
		"Blue", 
		"Orange", 
		"Black", 
		"Pink", 
		"Yellow", 
		"Purple", 
		"White", 
		"Navy"};
	favouriteColor = POSSIBLEFAVCOLORS[randomNumber];


	//setting random age, from 10 till 19
	randomNumber = 10 + rand() % 10;
	age = randomNumber;
}


Student::~Student()
{
}

void Student::greet()
{
	switch (timesCalled)
	{
	case 0:
		std::cout << "\t\tMy name is " << name << "." << std::endl;
		timesCalled++;
		break;
	case 1:
		std::cout << "\t\tMy age is " << age << "." << std::endl;
		timesCalled++;
		break;
	case 2:
		std::cout << "\t\tMy favoutite color is " << favouriteColor << "." << std::endl;
		timesCalled=0;
		break;
	default:
		timesCalled = 0;
		break;
	}
}

void Student::greetCompletely()
{
	std::cout << "\t\tMy name is " << name << "." << std::endl;
	std::cout << "\t\tMy age is " << age << "." << std::endl;
	std::cout << "\t\tMy favoutite color is " << favouriteColor << "." << std::endl;
}

std::string Student::getName()
{
	return name;
}



void Student::meet(Student toGreet)
{
	std::cout << "Hello " << toGreet.getName() << ", nice to meet you. My name is " << name << "." << std::endl;
}

void Student::meetWithReply(Student toGreet)
{
	std::cout << "Hello " << toGreet.getName() << ", nice to meet you. My name is " << name << "." << std::endl;
	std::cout << toGreet.getName() << " says: Nice to meet you, " << name << std::endl;
}
