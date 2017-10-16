#include <iostream>
#include<string>

using namespace std;

int main()
{
	int numberEntered;
	string ans;
	cout << "Enter number which you want to convert into Roman number(1-3999): ";
	cin >> numberEntered;

	if (numberEntered > 0 && numberEntered < 4000)
	{
		string M[] = { "","M","MM","MMM", "MV" };
		string C[] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
		string X[] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
		string I[] = { "","I","II","III","IV","V","VI","VII","VIII","IX" };
		ans = M[numberEntered / 1000] + C[(numberEntered % 1000) / 100] + X[(numberEntered % 100) / 10] + I[(numberEntered % 10)];

		cout << ans << endl;
	}
	else
		cout << "Incorrect number entered!" << endl;

	system("pause");
	return 0;
}