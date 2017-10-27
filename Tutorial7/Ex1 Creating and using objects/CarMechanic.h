//#pragma once

//#include "Car.h"

#ifndef CAR_MECH_H
#define CAR_MECH_H
#include "Car.h"
class Car;

class CarMechanic
{
private:
	std::string name;

public:
	CarMechanic(std::string);
	~CarMechanic();

	void repairCar(Car & carToFix);
	void oilChange(Car & carToReoil);
	void resprayCar(Car & carToRespray, std::string sprayColor);
};
#endif