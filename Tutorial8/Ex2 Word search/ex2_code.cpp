#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ifstream inputDataStream("data.txt");
	string wordToSearch = "awesome";
	string inputLine;
	string word;
	int timesMatched = 0;
	string removedCommas;

	cout << "Reading file" << endl;

	//removing commas
	while (getline(inputDataStream, inputLine))
	{
		
		istringstream ss(inputLine);

		while (getline(ss, word, ','))
		{
				removedCommas += word;
				if (word == wordToSearch)
					timesMatched++;
			
		}
		cout << removedCommas << endl;
	}
	
/*
	int pos = 0;
	while (true) {
		pos = removedCommas.find(wordToSearch, ++pos);
		if (pos != std::string::npos) {
			timesMatched++;
		}
		else break;
	}
	*/

	getline(cin, removedCommas);
	istringstream ss(removedCommas);
	while (ss >> word)
		if (word == wordToSearch)
			timesMatched++;

	cout << "Word '" << wordToSearch << "' was found " << timesMatched << " times." << endl;
	//https://stackoverflow.com/questions/18318980/taking-input-of-a-string-word-by-word
	system("pause");
	return 0;
}