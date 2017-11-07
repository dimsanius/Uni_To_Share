#pragma once
class DFTCore
{
public:
	DFTCore();
	~DFTCore();
	static int getAmountOfObjects();


private:
	static int numberOfADFT;
	double realPart, imaginaryPart;

};

