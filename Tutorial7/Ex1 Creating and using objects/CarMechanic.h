//#pragma once

//#include "Car.h"

#ifndef CAR_MECH_H
#define CAR_MECH_H

class Car;

class CarMechanic
{
private:
	std::string name;

public:
	CarMechanic(std::string);
	~CarMechanic();

	void repairCar(Car & carToFix);
	std::string getMechanicName();
	//Car* getCar(Car* c);

//protected:
	//Car* c;
};
#endif