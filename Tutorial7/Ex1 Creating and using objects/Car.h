//#pragma once
#include <string>

//#include "CarMechanic.h"

#ifndef CAR_H
#define CAR_H

class CarMechanic;

class Car
{
private:
	unsigned fuelLeft;
	bool brokenDown;
	std::string lastMechanicName;

public:
	Car();
	Car(unsigned);
	~Car();

	void drive();
	bool hasFuel();
	void refuel();
	void breakDownNow();
	void repairNow();
	bool isBrokenDown();
	std::string getlastMechanicName(CarMechanic & cm);
	void setlastMechanicName(CarMechanic & cm);
	//CarMechanic* getCarMechanic(CarMechanic* cm);
//protected:
	//CarMechanic* cm;
};

#endif