#include<iostream>
using namespace std;
void inputArray(int arr[][2], int r, int c);
void displayArray(int arr[][2], int r, int c);
void sumOfArray(int arr[][2], int r, int c);
void rowSum(int arr[][2], int r, int c);
void colSum(int arr[][2], int r, int c);
void transpose(int arr[][2], int r, int c);
int main() {

	int arr[2][2];

	int choice = 1;
	while (choice != 0) {
		cout << endl;
		cout << "Press 1 to input elements into matrix\n";
		cout << "Press 2 to display elements of matrix\n";
		cout << "Press 3 to display sum of all elements of matrix\n";
		cout << "Press 4 to display row-wise sum of matrix\n";
		cout << "Press 5 to display column wise sum of matrix\n";
		cout << "Press 6 to create transpose of matrix\n";
		cout << "Press 0 to Quit\n";
		cout << "Input: ";
		cin >> choice;

		if (choice == 1) {
			inputArray(arr, 2, 2);
		}
		else if (choice == 2) {
			displayArray(arr, 2, 2);
		}
		else if (choice == 3) {
			sumOfArray(arr, 2, 2);
		}
		else if (choice == 4) {
			rowSum(arr, 2, 2);
		}
		else if (choice == 5) {
			colSum(arr, 2, 2);
		}
		else if (choice == 6) {
			transpose(arr, 2, 2);
		}


	}
}

void inputArray(int arr[][2], int r, int c) {
	cout << "Enter Elements of array: ";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
}


void displayArray(int arr[][2], int r, int c) {
	cout << "Elements of array: ";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << arr[i][j] << " ";

		}
		cout << endl;
	}
}

void sumOfArray(int arr[][2], int r, int c) {
	int sum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum += arr[i][j];
		}
	}
	cout << "Sum of all elements of matrix is: " << sum << endl;
}

void rowSum(int arr[][2], int r, int c) {
	int sum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum += arr[i][j];
		}
		cout << "Sum of row " << i + 1 <<": "<< sum << endl;
		sum = 0;
	}
}

void colSum(int arr[][2], int r, int c) {
	int sum = 0;
	for (int j = 0; j<c; j++) {
		for (int i= 0; i < r; i++) {
			sum += arr[i][j];
		}
		cout << "Sum of Col " << j + 1 <<": "<< sum << endl;
		sum = 0;
	}
}

void transpose(int arr[][2], int r, int c) {
	cout << "Transpose of Matrix: " << endl;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
}



