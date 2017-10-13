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

	int personMostPancakesVH[10] = {};
	int personLeastPancakesVH[10] = {};
	int pancakesEatenVH[10] = {};
	

	while (true)
	{
	cout << "Enter exercise level:\n1. Easy\n2. Medium\n3. Hard\n4. Very Hard\n0. Exit" << endl;
	cin >> choice;



		switch (choice)
		{
		case 1:
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
			for (int i = 0; i < 10; i++)
			{

				cout << "How many pancakes were eaten by person " << i << ": ";
				cin >> pancakesEatenVH[i];


				if (i == 1)
				{
					//primary assignition
					mostPanckaesEaten = pancakesEatenVH[i];
					leastPanckaesEaten = pancakesEatenVH[i];
					personMostPancakesVH[i] = i;
					personLeastPancakesVH[i] = i;

				}

				if (mostPanckaesEaten < pancakesEaten)
					mostPanckaesEaten = pancakesEaten;
			

				if (leastPanckaesEaten > pancakesEaten)
					leastPanckaesEaten = pancakesEaten;
			

			}


			cout << "The biggest amount of pancakes eaten: " << mostPanckaesEaten << ", and was eaten by " << personMostPancakes << "." << endl;
			cout << "The least amount of pancakes eaten: " << leastPanckaesEaten << ", and was eaten by " << personLeastPancakes << "." << endl;

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