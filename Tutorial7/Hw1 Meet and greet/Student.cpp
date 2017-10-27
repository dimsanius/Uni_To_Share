#include "Student.h"
#include <string>
#include <ctime>
#include <iostream>

Student::Student()
{
	//setting random name from a pull of 5
	srand(time(0));
	std::cout << rand() << std::endl;
	int randomNumber = rand() % 5;
	std::string POSSIBLENAMES[5] = {"John" , "Bob", "Michael", "Rochelle", "William"};
	name = POSSIBLENAMES[randomNumber];

	//setting random fav color from a pull of 5
	std::cout << rand() << std::endl;
	randomNumber = rand() % 5;
	std::string POSSIBLEFAVCOLORS[5] = {"Red", "Green", "Blue", "Orange", "Black"};
	favouriteColor = POSSIBLEFAVCOLORS[randomNumber];


	//setting random age, from 10 till 19
	std::cout << rand() << std::endl;
	randomNumber = 10 + rand() % 10;
	age = randomNumber;
}


Student::~Student()
{
}

void Student::greet()
{
	std::cout << "My name is " << name << ". My age is " << age << ". My favourite color is " << favouriteColor << std::endl;

}
