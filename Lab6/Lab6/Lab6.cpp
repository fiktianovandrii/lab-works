#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	struct Detail
	{
		//name of detail
		string DTL;

		//feature of details
		int PR1;
		bool PR2, PR3;
	};

	//variables to fill the Struct object
	string NameOfDetail;
	int ValueForPR1;
	bool ValueForPR2, ValueForPR3;

	cout << "Hello, this program will get data about details from you and then sort the data in several groups: " << endl <<
		"1 - PR2 false, PR3 false" << endl << "2 - PR2 true, PR3 false" << endl << "3 - PR2 false, PR3 true" << endl << 
		"4 - PR2 true, PR3 true" << endl << endl;

	int AmountOfDetails;
	cout << "Input a number of details you want to create: ";
	cin >> AmountOfDetails;

	//Create an array of Detail type
	Detail *ArrayOfDetails = new Detail[AmountOfDetails];

	//get some data for every detail
	for (int i = 0; i < AmountOfDetails; i++) {
		cout << "Input name without space for delail " << i + 1 << ": ";
		cin >> NameOfDetail;
		ArrayOfDetails[i].DTL = NameOfDetail;
		cout << "Input integer PR1 for delail " << i + 1 << ": ";
		cin >> ValueForPR1;
		ArrayOfDetails[i].PR1 = ValueForPR1;
		cout << "Input 1(true) or 0(false) for PR2 delail " << i + 1 << ": ";
		cin >> ValueForPR2;
		ArrayOfDetails[i].PR2 = ValueForPR2;
		cout << "Input 1(true) or 0(false) for PR3 delail " << i + 1 << ": ";
		cin >> ValueForPR3;
		ArrayOfDetails[i].PR3 = ValueForPR3;
		cout << endl;
	}
	

	//output elements of array in order to their group

	cout << "1 Group: " << endl;
	for (int i = 0; i < AmountOfDetails; i++) {
		if (ArrayOfDetails[i].PR2 == false && ArrayOfDetails[i].PR3 == false) {
			cout << ArrayOfDetails[i].DTL << ": Pr1 = " << ArrayOfDetails[i].PR1 << ", PR2 = " <<
				ArrayOfDetails[i].PR2 << ", PR3 = " << ArrayOfDetails[i].PR3 << endl;
		}
	}
	cout << endl;

	cout << "2 Group: " << endl;
	for (int i = 0; i < AmountOfDetails; i++) {
		if (ArrayOfDetails[i].PR2 == true && ArrayOfDetails[i].PR3 == false) {
			cout << ArrayOfDetails[i].DTL << ": Pr1 = " << ArrayOfDetails[i].PR1 << ", PR2 = " <<
				ArrayOfDetails[i].PR2 << ", PR3 = " << ArrayOfDetails[i].PR3 << endl;
		}
	}
	cout << endl;

	cout << "3 Group: " << endl;
	for (int i = 0; i < AmountOfDetails; i++) {
		if (ArrayOfDetails[i].PR2 == false && ArrayOfDetails[i].PR3 == true) {
			cout << ArrayOfDetails[i].DTL << ": Pr1 = " << ArrayOfDetails[i].PR1 << ", PR2 = " <<
				ArrayOfDetails[i].PR2 << ", PR3 = " << ArrayOfDetails[i].PR3 << endl;
		}
	}
	cout << endl;

	cout << "4 Group: " << endl;
	for (int i = 0; i < AmountOfDetails; i++) {
		if (ArrayOfDetails[i].PR2 == true && ArrayOfDetails[i].PR3 == true) {
			cout << ArrayOfDetails[i].DTL << ": Pr1 = " << ArrayOfDetails[i].PR1 << ", PR2 = " <<
				ArrayOfDetails[i].PR2 << ", PR3 = " << ArrayOfDetails[i].PR3 << endl;
		}
	}

	system("Pause");
	return 0;
}