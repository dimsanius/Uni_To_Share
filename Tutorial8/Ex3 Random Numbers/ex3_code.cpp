
// Random number generators
// Rolling a dice 100 times
// Chris Bass
// November 2014

#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	time_t now = time(0);
	char * dt = ctime(&now);
	string currentDt;
	int highScore = 0;
	int scoreThisGame;
	ifstream inStream("highscore.txt");


	if (inStream.good())
	{
		inStream >> highScore;
		inStream.ignore();
		getline(inStream, currentDt);
	}
		
	inStream.close();
	int count1 = 0; // count of 1s rolled
	int count2 = 0; // count of 2s rolled
	int count3 = 0; // count of 3s rolled
	int count4 = 0; // count of 4s rolled
	int count5 = 0; // count of 5s rolled
	int count6 = 0; // count of 6s rolled

	srand(time(0)); // seed the pseudo random number generator

	for (int roll = 1; roll <= 100; roll++) // 100 rolls
	{
		int diceRoll;
		diceRoll = 1 + rand() % 6; // store a random number between 1 and 6

		switch (diceRoll)
		{
		case 1:
			++count1;
			break;
		case 2:
			++count2;
			break;
		case 3:
			++count3;
			break;
		case 4:
			++count4;
			break;
		case 5:
			++count5;
			break;
		case 6:
			++count6;
			break;
		default:
			break;
		}
	}

	cout << "You have rolled " << count1 << " ones" << endl;
	cout << "You have rolled " << count2 << " twos" << endl; // count of 1s rolled
	cout << "You have rolled " << count3 << " threes" << endl; // count of 1s rolled
	cout << "You have rolled " << count4 << " fours" << endl; // count of 1s rolled
	cout << "You have rolled " << count5 << " fives" << endl; // count of 1s rolled
	cout << "You have rolled " << count6 << " sixes" << endl; // count of 1s rolled


	scoreThisGame = count1 * 1 + count2 * 2 + count3 * 3 + count4 * 4 + count5 * 5 + count6 * 6;
	
	if (scoreThisGame > highScore)
	{
		ofstream outStream("highscore.txt");
		outStream << scoreThisGame << endl; 
		outStream << dt;
		outStream.close();

		cout << "Your score this game is: " << scoreThisGame << endl;
		cout << "Congratulations, you set new highscore! New highscore is: " << scoreThisGame << endl;
		cout << "Time it was set is: " << dt << endl;
	}
	else
	{
		cout << "Your score this game is: " << scoreThisGame << endl;
		cout << "Your high score from all the time is : " << highScore << endl;
		cout << "Highscore was set: " << currentDt << endl;
	}

	cout << "End of program" << endl;
	system("pause");
	return 0;
}
