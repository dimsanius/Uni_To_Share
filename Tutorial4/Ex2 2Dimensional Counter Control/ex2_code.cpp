#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i == 1)
			cout << "\t" << " " << "\t";
		else
			cout << "\t" << i << "\t";

		for (int y = 1; y <= 20; y++)
		{
			cout << i*y << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}