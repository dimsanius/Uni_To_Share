#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ifstream inputDataStream("data.txt");
	string wordToSearch = "awesome";
	string originalInput;
	string tempWord;
	int timesMatched = 0;
	string removedCommas;

	cout << "\tReading whole text with removed commas" << endl;
	//reading whole text with commas removed
	//this code will read only words that match wordToSearch witout reading words that consist wordToRead
	while (getline(inputDataStream, originalInput))
	{
		istringstream ss(originalInput);
		while (getline(ss, tempWord, ','))
		{
				removedCommas += tempWord;
		}
		cout << removedCommas << endl;
	}
	
	//Scaning word by word
	istringstream ss(removedCommas);
	while (ss >> tempWord)
		if (tempWord == wordToSearch)
			timesMatched++;

	cout << "Word '" << wordToSearch << "' was found " << timesMatched << " times." << endl;
	inputDataStream.close();
	system("pause");
	return 0;
}