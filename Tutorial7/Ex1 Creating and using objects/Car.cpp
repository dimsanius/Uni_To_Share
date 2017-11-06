#include "Car.h"
#include <iostream>
#include "CarMechanic.h"

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
				std::cout << "\tdrives car 1km" << std::endl;
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

 void Car::repairNow(CarMechanic mechanic)
{
	lastMechanicName = mechanic.getName();
	brokenDown = false;
	std::cout << "Mechanic " << lastMechanicName << " is fixing a car." << std::endl;
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

void Car::ReOil(CarMechanic mechanic)
{
	lastMechanicName = mechanic.getName();
	std::cout << "Mechanic " << lastMechanicName << " is changing oil!!!" << std::endl;
	oilQuality = 3;
}

std::string Car::getLastMechanicName(CarMechanic)
{
	return std::string();
}

void Car::respray(std::string colorToRespray)
{
	color = colorToRespray;
}

std::string Car::getColor()
{
	return color;
}
