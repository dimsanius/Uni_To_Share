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
	carToFix.repairNow(*this);
}

void CarMechanic::oilChange(Car & carToReoil)
{
	carToReoil.ReOil(*this);

}

void CarMechanic::resprayCar(Car & carToRespray, std::string sprayColor)
{
	carToRespray.respray(sprayColor);

}

std::string CarMechanic::getName()
{
	return name;
}

