#pragma once
class Car
{
private:
	unsigned fuelLeft;
	bool brokenDown;
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
};

