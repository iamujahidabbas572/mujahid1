#include<iostream>
using namespace std;
void input(int arr[][2],int row,int col) {
	cout << "enter values of array" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void output(int arr[][2], int row, int col) {
	cout << "displaying values of array" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout<< arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void sum(int arr[][2], int row, int col) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum+= arr[i][j];
		}
	}
	cout << "so the sum of elements are" << " " << sum << endl;
	cout << endl;
}

void rowsum(int arr[][2], int row, int col) {

	for (int i = 0; i < row; i++) {
		int sum = 0;
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
		cout << "so the sum of elements of row are" << " " << sum << endl;
	}
	
}

void columnSum(int arr[][2], int row, int col) {
	int summ = 0, sum2 = 0;
	for (int i = 0; i < row; i++) {

		summ += arr[i][0];
		summ += arr[i][1];
	}
	cout << "so the sum of elements of column are" << " " << sum << endl;
}
void transpose(int arr[][2], int row, int col) {
	cout << "displaying values of array" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[j][i];
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
	int row = 2, col = 2;
	int arr[2][2];


	int choice=0;

		while (choice != 7) {
			cout << "1.To input elements into matrix of size m x n" << endl;
			cout << "2.To display elements of matrix of size m x n" << endl;
			cout << "3.Sum of all elements of matrix of size m x n" << endl;
			cout << "4. To display row - wise sum of matrix of size m x n" << endl;
			cout << "5. To display column - wise sum of matrix of size m x n" << endl;
			cout << "6. To create transpose of matrix of size n x" << endl;

			cin >> choice;
		switch (choice) {
		case 1:
			input(arr, row, col);
			break;
		case 2:
			output(arr, row, col);
			break;
		case 3:
			sum(arr, row, col);
			break;
		case 4:
			rowsum(arr, row, col);
			break;
		case 5:
			columnSum(arr, row, col);
			break;

		case 6:
			transpose(arr, row, col);
			break;
		default:
			cout << "wrong entry" << endl;

		}
	}









	return 0;
}