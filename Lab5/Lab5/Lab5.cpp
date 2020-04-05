#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "Hello, user. This program would take some data and then output it, be accurate, 100 - max amount of tokens. Let's start!" <<
		"To close the program use tips in the end." << endl << endl;
	string DataArray[100];
	int Counter = 0;
	string SecondName;
	int BirthYear, TokensYears;
	string BirthCity;
	string ChoiseToEnd;

	while (Counter < 100) {
		//Input some data to fill the array
		cout << "Input your second name: ";
		cin >> SecondName;

		cout << "Input your birth city: ";
		cin >> BirthCity;

		cout << "Input your integer birth year: ";
		cin >> BirthYear;
		if (BirthYear > 2020) {
			cout << "Probably your birth year is not correct, check it more accurate next time." << endl;
		}
		//Filling the array with our data
		DataArray[Counter] = SecondName + '-' + to_string(2020 - BirthYear) + '-' + BirthCity;

		//part for closing the program
		cout << endl << "Do you want to close the program and get the result?" << endl << 
			"\'y\' - yes(close the program) \'n\' - no(continue to input some data): ";
		cin >> ChoiseToEnd;
		if (ChoiseToEnd == "y" || ChoiseToEnd == "Y") {
			break;
		}
		
		cout << endl;

		Counter++;
	}

	cout << endl;

	//output values from array
	for (int j = 0; j <= Counter; j++) {
		cout << DataArray[j] << endl;
	}

	system("Pause");
	return 0;
}