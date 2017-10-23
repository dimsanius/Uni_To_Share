#include <string>
#include <iostream>
#include "CarMechanic.h"
#include "Car.h"

CarMechanic::CarMechanic(std::string nameGiven)
{
	CarMechanic::name = nameGiven;
}

CarMechanic::~CarMechanic()
{
}

void CarMechanic::repairCar(Car &carToFix)
{
	std::cout << "Mechanic " << name << " is working!!!" << std::endl;
	carToFix.repairNow();
	
}

