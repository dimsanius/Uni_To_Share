#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int arr[100] = {};

	for (int i = 0; i < 100; i++)
	{
		arr[i] = i+1;
		if (i % 10 == 0 && i != 0)
			cout << endl;
		cout << setw(4) << arr[i];
	}
	cout << endl;
	system("pause");

	return 0;
}