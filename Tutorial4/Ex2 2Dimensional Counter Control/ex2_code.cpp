#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		for (int y = 1; y <= 20; y++)
		{
			cout << setw(4) << i*y << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}