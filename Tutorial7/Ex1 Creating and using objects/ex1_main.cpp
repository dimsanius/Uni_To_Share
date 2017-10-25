#include <iostream>

#ifndef CAR_MECHANIC_H1
#define CAR_MECHANIC_H1
#include "CarMechanic.h"

#ifndef CAR_H1
#define CAR_H1
#include "Car.h"



using namespace std;

int main()
{
	Car myCarObject1;

	Car speedster(10);

	CarMechanic mechanic("John");

	
	std::cout << "Speedster drives: " << std::endl;

	if (!speedster.isBrokenDown())
	{
		while (speedster.hasFuel())
		{
			speedster.drive();
		}

		speedster.drive();
	}

	std::cout << "Speedster refuels... Wrooom!" << std::endl;
	speedster.refuel();

	if (!speedster.isBrokenDown())
	{
		std::cout << "Speedster drives once again: " << std::endl;
		while (speedster.hasFuel())
		{
			speedster.drive();
		}
	}

	std::cout << "Speedster refuels... Wrooom!" << std::endl;
	speedster.refuel();

	std::cout << "Hold on! I heard gear falling from car! Anyway, let's try to ride!" << std::endl;
	speedster.breakDownNow();
	if (!speedster.isBrokenDown())
		speedster.drive();
	else
	{
		std::cout << "We are stuck... Calling mechanics to fix a car..." << std::endl;
		mechanic.repairCar(speedster);

		if (speedster.isBrokenDown())
		{
			std::cout << "Car is dead :C" << std::endl;
		}

		if(!speedster.isBrokenDown())
		{
			std::cout << "Bzzz... Wrooom! Mechanics done! Car is repaired!" << std::endl;
			while (speedster.hasFuel())
			{
				speedster.drive();
			}

			speedster.drive();
		}
		
	}
		
	std::cout << "myCarObject1 drives: " << std::endl;
	while (myCarObject1.hasFuel())
	{
		myCarObject1.drive();
	}

	myCarObject1.drive();
	system("pause");

	return 0;
}

#endif
#endif