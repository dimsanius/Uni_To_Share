#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "DFTCore.h"

using namespace std;
/*
struct polar
{
	double degrees = 0, length = -0.5000;
};

struct cart
{
	double realPart, imaginaryPart;
	char symbol;
};
*/

struct polarData
{
	double inDegrees, inLength;
};
int main()
{
	polarData polar[361];
	DFTCore DFT[8];

	cout << DFTCore::getAmountOfObjects() << endl;
	ifstream inStream("data.txt");
	for (int i = 0; !inStream.eof(); i++)
	{
		inStream >> polar[i].inDegrees;
		inStream >> polar[i].inLength;
	}
	//cout << polar[360].inDegrees;
	/*
	struct polar polarData;
	struct cart cartData;
	cartData.realPart = polarData.length * cos(polarData.degrees);
	cartData.imaginaryPart = polarData.length * sin(polarData.degrees);
	if (cartData.imaginaryPart >= (int)0)
		cartData.symbol = '+';
	else
		cartData.symbol = '-';
	cout << "Input polar form: " << polarData.length << ", degrees = " << polarData.degrees << endl;
	cout << "Resulting cartesean formula is " << setprecision(4) << cartData.realPart << ' ' << cartData.symbol << ' ' << cartData.imaginaryPart << "i" << endl;
	*/


	
	system("pause");
	return 0;
}