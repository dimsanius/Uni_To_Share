#include "DFTCore.h"

int DFTCore::numberOfADFT = 0;

DFTCore::DFTCore()
{
	numberOfADFT++;
}


DFTCore::~DFTCore()
{
	numberOfADFT--;
}

int DFTCore::getAmountOfObjects()
{
	return numberOfADFT;
}
