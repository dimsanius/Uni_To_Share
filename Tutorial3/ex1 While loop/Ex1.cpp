#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int counter = 1;
	while (counter <= 10)
	{
		sum += counter;
		counter++;
		cout << "Sum of previous values: " << sum << endl;
	}
	system("pause");
	return 0;
}
