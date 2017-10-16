#include <iostream>

using namespace std;

int helloWorld();

int main()
{
	cout << "Your favourite number is: " << helloWorld() << endl;
	system("pause");
	return 0;
}

int helloWorld()
{
	cout << "Hello World!" << endl;
	return 7;
}