#include <iostream>
#include <math.h>
using namespace std;

const double goldenRatio = (1 + sqrt(5)) / 2; // "golden" number

// Рассматриваемая нами функция
double function(double x, double a, double b, double c) {
	return a * x * x + b * x + c;
}

int main() {
	double x1, x2; // start and end of the line
	double a, b, c; // numbers for our function
	double accuracy; // accuracy for accounting of the function
	double xx1, xx2; // dots which devide the line in order to golden number
	cout << "Pls, input start amount for line: ";
	cin >> x1;
	cout << "Pls, input end amount for line: ";
	cin >> x2;
	cout << "Pls, input numbers a, b, c: ";
	cin >> a >> b >> c;
	cout << "Pls, input accuracy: ";
	cin >> accuracy;
	while (fabs(x1 - x2) > accuracy) {
		xx1 = x2 - (x2 - x1) / goldenRatio;
		xx2 = x1 + (x2 - x1) / goldenRatio;
		if (function(xx1, a, b, c) >= function(xx2, a, b, c)) // Condition to find min
			x1 = xx1;
		else
			x2 = xx2;
	}
	cout << "Dot: " << (x1 + x2) / 2 << ", Value of the function: " << function((x1 + x2) / 2, a, b, c) << '\n';

	system("Pause");
	return 0;
}