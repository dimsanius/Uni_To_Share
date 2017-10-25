#include <string>
#include <iostream>
#include "CarMechanic.h"

CarMechanic::CarMechanic(std::string nameGiven)
{
	CarMechanic::name = nameGiven;
}

CarMechanic::~CarMechanic()
{
}

void CarMechanic::repairCar(Car & carToFix)
{
	std::cout << "Mechanic " << name << " is working!!!" << std::endl;
	carToFix.repairNow();
	
}

std::string CarMechanic::getMechanicName()
{
	return name;
}

//Car * CarMechanic::getCar(Car* c)
//{
//	return c;
//}
