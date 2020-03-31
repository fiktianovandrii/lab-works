#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int m, n;
	int matrix[10][10];
	cout << "Hello, input integer values for m and n from 1 to 10 to build the matrix: ";
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matrix[i][j] = i * m + j; //initialize matrix 
			printf("%d ", matrix[i][j]); //output values of the matrix 
		}
		printf("\n");
	}
	cout << "\nThe matrix after transposing: " << "\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
	
	system("Pause");
	return 0;
}