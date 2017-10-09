#include <iostream>

using namespace std;

int main()
{
	//Activity 4
	cout << "---------Activity 4---------\n";
	int local = 3;
	//we declared and initialized global variable local
	{
		cout << local << endl;
		//we output the value of global variable local
		int local = 4;
		//we declared and initialized local vaiable local
		cout << local << endl;
		//we printed local variable local
		//local scope ends, so no more local variable local
	}
	
	cout << local << endl;
	//cout now refers to global variable local
	system("pause");
	return 0;
}