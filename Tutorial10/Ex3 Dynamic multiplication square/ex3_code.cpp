#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	int howBig;
	vector<vector<int>> myVector;
	
	cout << "Enter how big multiplication square you want to have: ";
	cin >> howBig;
	cout << endl;
	myVector.resize(howBig+1);

	for (int i = 0; i < howBig + 1; i++)				//loop through outer vector
	{
		if(i != 0)
			cout << i;
		cout << "\t";
		myVector[i].resize(howBig);
		for (int j = 0; j < howBig; j++)			//loop through inner vector
		{
			if (i == 0)
				myVector[i][j] = (j + 1);
			else
				myVector[i][j] = (j + 1)*i;
				
			cout << myVector[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}