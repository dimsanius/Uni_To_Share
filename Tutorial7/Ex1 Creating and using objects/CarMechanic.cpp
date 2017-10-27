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

void CarMechanic::oilChange(Car & carToReoil)
{
	std::cout << "Mechanic " << name << " is changing oil!!!" << std::endl;
	carToReoil.ReOil();

}

void CarMechanic::resprayCar(Car & carToRespray, std::string sprayColor)
{
	carToRespray.respray(sprayColor);

}

