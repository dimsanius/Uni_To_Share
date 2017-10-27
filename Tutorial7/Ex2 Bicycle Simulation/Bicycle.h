// Bicycle.h - defines a Bicycle class, with the purpose of
//     modelling some of the parts of a bicycle.
// Date: 16/11/2012
// By: Chris Bass

#pragma once
class Bicycle
{
private:
	int frontGear;
	int rearGear;

	double wheelDiameterMeters;
	double pedallingRPM;

	int frontSprocketTeeth01;
	int frontSprocketTeeth02;
	int frontSprocketTeeth03;

	int rearSprocketTeeth01;
	int rearSprocketTeeth02;
	int rearSprocketTeeth03;
	int rearSprocketTeeth04;
	int rearSprocketTeeth05;
	int rearSprocketTeeth06;
	int rearSprocketTeeth07;
	int rearSprocketTeeth08;
	int rearSprocketTeeth09;
	int rearSprocketTeeth10;

public:
	Bicycle(void);
	~Bicycle(void);

	// typical range of values is from 80 to 110 rpm
	void setPedallingSpeed(double revolutionsPerMinute);
	// for sprockets 1 to 3
	void setFrontGear(int sproketNumber);
	int getFrontGear(void);
	// for sprockets 1 to 10
	void setRearGear(int sproketNumber);
	int getRearGear(void);
	// typical diameter is 700mm
	void setWheelDiameter(double diameterMillimeters);
	
	// returns the selected gear ratio
	double gearRatio(void);
	// returns the velocity in Km/Hour
	double velocityKilometersPerHour(void);

};
