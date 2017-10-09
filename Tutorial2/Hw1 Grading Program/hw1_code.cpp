#include <iostream>

using namespace std;

int main()
{
	//Activity HW 1
	cout << "---------HW 1---------\n";
	int score;
	cout << "Enter a grade you scored in a programming class: ";
	cin >> score;
	//checking the range of score
	if (score > 100 || score < 0)
	{
		cout << "Invalid score entered!. Please, enter again!\n";
		while (true)
		{
			cout << "Enter a grade you scored in a programming class: ";
			cin >> score;
			if (score <= 100 && score > 0)
				break;
			else
				cout << "Invalid score entered!. Please, enter again!\n";
		}
	}

	if (score == 100)
		cout << "Congratulations! You got the perfect score!!!\n";
	if (score < 100 && score >= 90)
		cout << "Congratulations! You got A grade!\n";
	if (score <= 89 && score >= 80)
		cout << "You got B grade!\n";
	if (score <= 79 && score >= 70)
		cout << "You got C grade!\n";
	if (score <= 69 && score >= 60)
		cout << "You got D grade!\n";
	if (score <= 59 && score >= 0)
		cout << "You got F grade!\n";
	system("pause");
	return 0;
}