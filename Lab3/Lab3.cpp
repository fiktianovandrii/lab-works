#include <iostream>
#include <math.h>
using namespace std;

const double goldenRatio = (1 + sqrt(5)) / 2; // "golden" number

// Рассматриваемая нами функция
double function(double x, double a, double b, double c) {
	return a * x * x + b * x + c;
}

int main() {
	double start_value, end_value; // start and end of the line
	double a, b, c; // numbers for our function
	double accuracy; // accuracy for accounting of the function
	double first_dot_to_devide, second_dot_to_devide; // dots which devide the line in order to golden number
	cout << "This program would find min value of the function: ax^2 + bx + c" << "\n";
	cout << "Pls, input start amount for line: ";
	cin >> start_value;
	cout << "Your start amount: " << start_value << "\n";
	cout << "Pls, input end amount for line: ";
	cin >> end_value;
	cout << "Your end amount: " << end_value << "\n";
	cout << "Pls, input numbers a, b, c: ";
	cin >> a >> b >> c;
	cout << "Your a, b, c: " << a << ", " << b << ", " << c << "\n";
	cout << "Pls, input accuracy: ";
	cin >> accuracy;
	cout << "Your accuracy: " << accuracy << "\n";
	while (fabs(start_value - end_value) > accuracy) {
		first_dot_to_devide = end_value - (end_value - start_value) / goldenRatio;
		second_dot_to_devide = start_value + (end_value - start_value) / goldenRatio;
		if (function(first_dot_to_devide, a, b, c) >= function(second_dot_to_devide, a, b, c)) // Condition to find min
			start_value = first_dot_to_devide;
		else
			end_value = second_dot_to_devide;
	}
	cout << "Dot: " << (start_value + end_value) / 2 << ", Value of the function: " << function((start_value + end_value) / 2, a, b, c) << '\n';

	system("Pause");
	return 0;
}