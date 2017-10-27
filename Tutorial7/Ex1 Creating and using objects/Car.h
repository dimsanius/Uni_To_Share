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
	int totalKmTravelled = 0;
	int oilQuality = 3;
	std::string color= "white";

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
	int getTotalKmTravelled();

	bool hasOil();
	void ReOil();

	void respray(std::string);
	std::string getColor();
//protected:
	//CarMechanic* cm;
};

#endif