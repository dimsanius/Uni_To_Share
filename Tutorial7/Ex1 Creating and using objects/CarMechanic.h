#pragma once
#include <string>
#include "Car.h"


class CarMechanic
{
private:
	std::string name;

public:
	CarMechanic(std::string);
	~CarMechanic();

	void repairCar(Car & carToFix);

};


