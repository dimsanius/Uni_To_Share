#include "Car.h"
#include <iostream>


Car::Car()
{
	brokenDown = false;
	fuelLeft = 5;
}

Car::Car(unsigned startingFuel)
{
	brokenDown = false;
	fuelLeft = startingFuel;
}


Car::~Car()
{
}

void Car::drive() 
{	
		if (brokenDown == true)
		{
			std::cout << "Can't drive! Car is broken down! Needs fixing." << std::endl;
		}
		else
		{
			if (fuelLeft > 0)
			{
				fuelLeft--;
				oilQuality--;
				std::cout << "drives car 1km" << std::endl;
				totalKmTravelled++;
			}
		}
}

bool Car::hasFuel()
{
	if (fuelLeft > 0)
		return true;
	return false;
}

void Car::refuel()
{
	fuelLeft = 5;
}


void Car::breakDownNow()
{
	brokenDown = true;
}

 void Car::repairNow()
{
	brokenDown = false;
}

bool Car::isBrokenDown()
{
	if (brokenDown == false)
		return false;
	else
		return true;

}

int Car::getTotalKmTravelled()
{
	return totalKmTravelled;
}

bool Car::hasOil()
{
	if (oilQuality == 0)
		return 0;
	else
		return 1;
}

void Car::ReOil()
{
	oilQuality = 3;
}

void Car::respray(std::string colorToRespray)
{
	color = colorToRespray;
}

std::string Car::getColor()
{
	return color;
}

//CarMechanic * Car::getCarMechanic(CarMechanic * cm)
//{
//	return cm;
//}
