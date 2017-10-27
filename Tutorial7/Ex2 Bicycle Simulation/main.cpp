// main.cpp - the defines the main function for a bicycle simulator program.
// Date: 16/11/2012
// By: Chris Bass

#include <iostream>
#include "Bicycle.h"

void bicycleStats(Bicycle bicycle);

int main()
{
	std::cout << "Hello World!" << std::endl << std::endl;
	std::cout << "--- Welcome to the Bicycle Simulator Program (Version 0.2) ---" << std::endl << std::endl;

	Bicycle myBicycleObject;
	std::cout << "New bicycle object" << std::endl;

	std::cout << "Set pedalling speed to: 110rpm" << std::endl;
	myBicycleObject.setPedallingSpeed(110);

	// Activity - Test the Bicycle class
	//  todo here:
	//   In no more than 10 lines of code cycle through every gear combination of
	//   the myBicycleObject and then output the resulting gear ratio and velocity
	//   to the console (you can use the bicycleStats function to help with the output).

	for (int i = 1; i < 4; i++)
	{
		myBicycleObject.setFrontGear(i);
		for (int j = 1; j < 11; j++)
		{
			myBicycleObject.setRearGear(j);
			bicycleStats(myBicycleObject);
		}
			
	}


	std::system("pause");
	return 0;
}

void bicycleStats(Bicycle bicycle)
{
	std::cout << "front gear: " << bicycle.getFrontGear()
		<< " rear gear: " << bicycle.getRearGear()
		<< " gear ratio: " << bicycle.gearRatio()
		<< " and velocity is: " << bicycle.velocityKilometersPerHour() << " Km/h" << std::endl;
}

