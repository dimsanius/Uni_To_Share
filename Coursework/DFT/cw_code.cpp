#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "DFTCore.h"



using namespace std;


const double PI = 3.14159265358979323846;
struct polarData
{
	double inDegrees, inLength;
};

struct DFTCoefficients
{
	double realPart=0, imaginaryPart=0;
};
int main()
{
	cout << fixed << setprecision(4);

	polarData polar[361];
	DFTCoefficients DFTCoef;
	DFTCore DFT[8];

	cout << DFTCore::getAmountOfObjects() << endl;
	ifstream inStream("data.txt");
	for (int i = 0; !inStream.eof(); i++)
	{
		inStream >> polar[i].inDegrees;
		inStream >> polar[i].inLength;
		DFTCoef.realPart += (polar[i].inLength*PI / 180)*cos(i*PI / 180);
		DFTCoef.imaginaryPart += (polar[i].inLength*PI / 180)*sin(i*PI / 180);
	}
	cout << DFTCoef.realPart << endl;
	cout << DFTCoef.imaginaryPart << endl;

	
	system("pause");
	return 0;
}