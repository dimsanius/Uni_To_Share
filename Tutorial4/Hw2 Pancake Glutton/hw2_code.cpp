#include <iostream>

using namespace std;

int main()
{
	int choice;
	int pancakesEaten;

	int mostPanckaesEaten;
	int leastPanckaesEaten;

	int personMostPancakes;
	int personLeastPancakes;

	int PANCAKES_EATEN[10] = {};
	int biggestAmount = -1;
	int PERSON_INDEX_WITH_BIGGEST_AMOUNT[10] = {};
	int amountOfPeopleWithBiggestAmountEaten = 0;

	while (true)
	{
	cout << "Enter exercise level:\n1. Easy\n2. Medium\n3. Hard\n4. Very Hard\n0. Exit" << endl;
	cin >> choice;



		switch (choice)
		{
		case 1:
			//Easy level
			for (int i = 1; i <= 10; i++)
			{

				cout << "How many pancakes were eaten by person " << i << ": ";
				cin >> pancakesEaten;

				if (i == 1)
					//primary assignition
					mostPanckaesEaten = pancakesEaten;

				if (mostPanckaesEaten < pancakesEaten)
					mostPanckaesEaten = pancakesEaten;

			}
			cout << "The biggest amount of pancakes eaten: " << mostPanckaesEaten << endl;

			break;

		case 2:
			//Medium level
			for (int i = 1; i <= 10; i++)
			{

				cout << "How many pancakes were eaten by person " << i << ": ";
				cin >> pancakesEaten;

				if (i == 1)
				{
					//primary assignition
					mostPanckaesEaten = pancakesEaten;
					personMostPancakes = i;
				}

				if (mostPanckaesEaten < pancakesEaten)
				{
					mostPanckaesEaten = pancakesEaten;
					personMostPancakes = i;
				}

			}
			cout << "The biggest amount of pancakes eaten: " << mostPanckaesEaten << ", and was eaten by " << personMostPancakes << "." << endl;
			
			break;

		case 3:
			//Hard level
			for (int i = 1; i <= 10; i++)
			{

				cout << "How many pancakes were eaten by person " << i << ": ";
				cin >> pancakesEaten;

				if (i == 1)
				{
					//primary assignition
					mostPanckaesEaten = pancakesEaten;
					leastPanckaesEaten = pancakesEaten;
					personMostPancakes = i;
					personLeastPancakes = i;

				}

				if (mostPanckaesEaten < pancakesEaten)
				{
					mostPanckaesEaten = pancakesEaten;
					personMostPancakes = i;
				}

				if (leastPanckaesEaten > pancakesEaten)
				{
					leastPanckaesEaten = pancakesEaten;
					personLeastPancakes = i;
				}

			}


			cout << "The biggest amount of pancakes eaten: " << mostPanckaesEaten << ", and was eaten by " << personMostPancakes << "." << endl;
			cout << "The least amount of pancakes eaten: " << leastPanckaesEaten << ", and was eaten by " << personLeastPancakes << "." << endl;

			break;

		case 4: 
			//Very hard level
			for (int i = 0; i < 10; i++)
			{
				//Getting all values of eaten pancakes and finding the biggest amount eaten
				cout << "How many pancakes were eaten by person " << i+1 << ": ";
				cin >> PANCAKES_EATEN[i];	

				if (biggestAmount < PANCAKES_EATEN[i])
					biggestAmount = PANCAKES_EATEN[i];
			}

			for (int i = 0; i < 10; i++)
			{
				//finding indexes and amount of people who ate the most pancakes
				if (PANCAKES_EATEN[i] == biggestAmount)
				{
					PERSON_INDEX_WITH_BIGGEST_AMOUNT[amountOfPeopleWithBiggestAmountEaten] = i;
					amountOfPeopleWithBiggestAmountEaten++;
				}
			}


			for (int i = 0; i < amountOfPeopleWithBiggestAmountEaten; i++)
			{
				//Outputting acquired information beautifully
				if(i == 0)
					cout << "Person " << PERSON_INDEX_WITH_BIGGEST_AMOUNT[i] + 1;
				else if (i < amountOfPeopleWithBiggestAmountEaten - 1)
					cout << ", Person " << PERSON_INDEX_WITH_BIGGEST_AMOUNT[i] + 1;
				else
					cout << " and Person " << PERSON_INDEX_WITH_BIGGEST_AMOUNT[i] + 1;

			}
			if(amountOfPeopleWithBiggestAmountEaten > 1)
				cout << " ate the most pancakes: " << biggestAmount << " each!" << endl;
			else
				cout << " ate the most pancakes: " << biggestAmount << endl;

			break;

		case 0:
			return 0;
			break;

		default:
			cout << "Incorrect number entered! Please, try again." << endl;
			break;
		}
	}




	return 0;
}