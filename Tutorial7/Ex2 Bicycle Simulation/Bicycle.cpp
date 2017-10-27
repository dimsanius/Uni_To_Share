// Bicycle.cpp - defines the methods declared in the Bicycle class.
// Date: 16/11/2012
// By: Chris Bass

#include "Bicycle.h"

Bicycle::Bicycle(void)
{
	// this default constructor sets up values for a default bicycle
	frontGear = 1;
	rearGear = 1;
	wheelDiameterMeters = 0.7;
	pedallingRPM = 80;

	frontSprocketTeeth01 = 30;
	frontSprocketTeeth02 = 39;
	frontSprocketTeeth03 = 50;

	rearSprocketTeeth01 = 12;
	rearSprocketTeeth02 = 13;
	rearSprocketTeeth03 = 14;
	rearSprocketTeeth04 = 15;
	rearSprocketTeeth05 = 16;
	rearSprocketTeeth06 = 17;
	rearSprocketTeeth07 = 19;
	rearSprocketTeeth08 = 21;
	rearSprocketTeeth09 = 24;
	rearSprocketTeeth10 = 27;
}

Bicycle::~Bicycle(void)
{
}

void Bicycle::setPedallingSpeed(double revolutionsPerMinute)
{
	pedallingRPM = revolutionsPerMinute;
}

void Bicycle::setFrontGear(int sproketNumber)
{
	if (sproketNumber >= 1 && sproketNumber <= 3)
		frontGear = sproketNumber;
}
int Bicycle::getFrontGear(void)
{
	return frontGear;
}
void Bicycle::setRearGear(int sproketNumber)
{
	if (sproketNumber >= 1 && sproketNumber <= 10)
		rearGear = sproketNumber;
}
int Bicycle::getRearGear(void)
{
	return rearGear;
}

void Bicycle::setWheelDiameter(double diameterMillimeters)
{
	wheelDiameterMeters = diameterMillimeters / 1000;
}

double Bicycle::gearRatio(void)
{
	double frontTeeth = 1;
	double rearTeeth = 1;
	
	if (frontGear == 1)
		frontTeeth = frontSprocketTeeth01;
	else if (frontGear == 2)
		frontTeeth = frontSprocketTeeth02;
	else if (frontGear == 3)
		frontTeeth = frontSprocketTeeth03;

	if (rearGear == 1)
		rearTeeth = rearSprocketTeeth01;
	else if (rearGear == 2)
		rearTeeth = rearSprocketTeeth02;
	else if (rearGear == 3)
		rearTeeth = rearSprocketTeeth03;
	else if (rearGear == 4)
		rearTeeth = rearSprocketTeeth04;
	else if (rearGear == 5)
		rearTeeth = rearSprocketTeeth05;
	else if (rearGear == 6)
		rearTeeth = rearSprocketTeeth06;
	else if (rearGear == 7)
		rearTeeth = rearSprocketTeeth07;
	else if (rearGear == 8)
		rearTeeth = rearSprocketTeeth08;
	else if (rearGear == 9)
		rearTeeth = rearSprocketTeeth09;
	else if (rearGear == 10)
		rearTeeth = rearSprocketTeeth10;
	
	double selectedGearRatio = (double)frontTeeth / (double)rearTeeth;

	return selectedGearRatio;
}

double Bicycle::velocityKilometersPerHour(void)
{
	double pedallingRotationsPerHour = pedallingRPM * 60;
	double wheelDiameterKilometers = wheelDiameterMeters * 0.001;
	double velocity = pedallingRotationsPerHour * gearRatio() * wheelDiameterKilometers;

	return velocity;
}
