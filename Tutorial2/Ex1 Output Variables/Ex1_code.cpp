#include <iostream>

using namespace std;

int main ()
{
	//Activity 1
	cout << "---------Activity 1---------\n";
	int var;
	var = 5;	//if variable is not initialized, it pops up with error. Error code :The variable 'var' is being used without being initialized.
	cout << "Value of var variable: " << var << " . Let's increase it by one!" << endl;
	var++;
	cout << "Increment happened!" << endl;
	cout << "Congratulations! Value of var variable is now: " << var;
	cout << "\n";
	system("pause");
	return 0;
}