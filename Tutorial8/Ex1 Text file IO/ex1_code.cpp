
// Text file input and output
// Chris Bass
// November 2014

#include <windows.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// writing to a text file using an output file stream object
	{
		cout << "--writing to output.txt started--" << endl;

		ofstream outputFileStream;

		outputFileStream.open("output.txt");
		outputFileStream << "Hello text file!" << endl;
		outputFileStream << "This will be inside output.txt" << endl;
		outputFileStream.close();

		cout << "--writing to output.txt finished--" << endl << endl;
	}

	// reading from a text file using an input file stream object
	{
		cout << "--reading from input.txt started--" << endl;

		ifstream inputFileStream;

		inputFileStream.open("input.txt");

		if (inputFileStream.good())
		{
			cout << "Input file is good start processing" << endl;

			char inputChar = inputFileStream.get();

			while (!inputFileStream.fail())
			{
				cout << inputChar;
				inputChar = inputFileStream.get();
			}

			cout << endl;

			if (inputFileStream.eof())
				cout << "Reached the end of file marker" << endl;
			else
				cout << "Error in input file" << endl;
		}
		else
		{
			cout << "Error opening input file, ";
			cout << "check 'input.txt' exists in correct directory" << endl;
		}



		inputFileStream.close();

		cout << "--reading from input.txt finished--" << endl << endl;
	}

	// reading from a text file using an input file stream object
	// this uses std::string
	{
		cout << "--reading from input.txt started--" << endl;

		ifstream inputFileStream;

		inputFileStream.open("input.txt");

		if (inputFileStream.good())
		{
			cout << "Input file is good start processing" << endl;

			string inputString;

			inputFileStream >> inputString;

			while (!inputFileStream.fail())
			{
				cout << inputString << ";";
				inputFileStream >> inputString;
			}

			cout << endl;

			if (inputFileStream.eof())
				cout << "Reached the end of file marker" << endl;
			else
				cout << "Error in input file" << endl;
		}
		else
		{
			cout << "Error opening input file, ";
			cout << "check 'input.txt' exists in correct directory" << endl;
		}

		inputFileStream.close();

		cout << "--reading from input.txt finished--" << endl << endl;
	}

	// reading from a text file using an input file stream object
	// this assumes the data in the text file is in the format of:
	// int double int double int double...
	{
		cout << "--reading from inputdata.txt started--" << endl;

		ifstream inputFileStream;

		inputFileStream.open("inputdata.txt");

		if (inputFileStream.good())
		{
			int rowCounter = 1;
			int var1;
			double var2;

			inputFileStream >> var1;

			while (!inputFileStream.fail())
			{
				cout << "row" << setw(3) << rowCounter;
				cout << "   var1 = " << setw(3) << var1;
				rowCounter++;

				inputFileStream >> var2;
				if (!inputFileStream.fail())
				{
					cout << "   var2 = " << setw(5) << var2;
					inputFileStream >> var1;
				}
				cout << endl;
			}

			if (inputFileStream.eof())
				cout << "Reached the end of file marker" << endl;
			else
				cout << "Error whilst reading input file" << endl;
		}
		else
		{
			cout << "Error opening input file, ";
			cout << "check 'inputdata.txt' exists in correct directory" << endl;
		}

		inputFileStream.close();

		cout << "--reading from inputdata.txt finished--" << endl << endl;
	}

	cout << "End of program" << endl;

	system("pause");

	return 0;
}
