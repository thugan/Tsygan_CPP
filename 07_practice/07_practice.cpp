#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(NULL));
	const int column = 3;
	const int row = 4;
	int arr1[row][column] = {};
	int cnt = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr1[i][j] = rand() % 11 - 5;
			cout << arr1[i][j] << " ";
			if (arr1[i][j] != 0) {
				cnt += 1;
			}
		}
		cout << endl;
	}
	cout << cnt << "-Numbers that != 0" << endl;
	const int column1 = 3;
	const int row1 = 3;
	int arr2[row1][column1] = {};
	cnt = 0;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column1; j++)
		{
			arr2[i][j] = rand() % 11 - 5;
			cout << arr2[i][j] << " ";
			if (arr2[i][j] == 0) {
				cnt += 1;
			}
		}
		cout << endl;
	}
	cout << cnt << "-Numbers that = 0" << endl;
	const int column3 = 3;
	const int row3 = 7;
	int arr4[row3][column3] = {};
	cnt = 0;
	for (int i = 0; i < row3; i++)
	{
		for (int j = 0; j < column3; j++)
		{
			arr4[i][j] = rand() % 40 - 20;
			cout << arr4[i][j] << " ";
			if (arr4[i][j] < 0) {
				if ((arr4[i][j] * -1) < 12) {
					cnt += 1;
				}
			}
		}
		cout << endl;
	}
	cout << cnt << "-Numbers with an absolute value less than 12" << endl;
	const int column2 = 4;
	const int row2 = 5;
	int arr3[row2][column2] = {};
	cnt = 0;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			arr3[i][j] = rand() % 11 - 5;
			cout << arr3[i][j] << " ";
			if (arr3[i][j] > 0) {
				cnt += 1;
			}
		}
		cout << endl;
	}
	cout << cnt << "-Numbers that > 0" << endl;
	const int column4 = 4;
	const int row4 = 5;
	int arr5[row4][column4] = {};
	cnt = 1;
	for (int i = 0; i < row4; i++)
	{
		for (int j = 0; j < column4; j++)
		{
			arr5[i][j] = rand() % 11 - 5;
			cout << arr5[i][j] << " ";
			if (arr5[i][j] > 0) {
				cnt *= arr5[i][j];
			}
		}
		cout << endl;
	}
	cout << cnt << "-the product of all positive elements" << endl;
	const int column6 = 4;
	const int row6 = 4;
	int arr6[row6][column6] = {};
	cnt = 1;
	for (int i = 0; i < row6; i++)
	{
		for (int j = 0; j < column6; j++)
		{
			arr6[i][j] = rand() % 11 - 5;
			cout << arr6[i][j] << " ";
			if (arr6[i][j] % 6 == 1) {
				cnt += 1;
			}
		}
		cout << endl;
	}
	cout << cnt << "-the number of elements that yield a remainder of 1 when divided by 6." << endl;
	const int column7 = 6;
	const int row7 = 5;
	int arr7[row7][column7] = {};
	int min = arr7[1][1];
	for (int i = 0; i < row7; i++)
	{
		for (int j = 0; j < column7; j++)
		{
			arr7[i][j] = rand() % 11 - 5;
			cout << arr7[i][j] << " ";
			if (arr7[i][j] < min) {
				min = arr7[i][j];
			}
		}
		cout << endl;
	}
	cout << min << "-minimal element." << endl;

	int arr8[row7][column7] = {};
	int max = arr8[1][1];
	for (int i = 0; i < row7; i++)
	{
		for (int j = 0; j < column7; j++)
		{
			arr8[i][j] = rand() % 11 - 5;
			cout << arr8[i][j] << " ";
			if (arr8[i][j] > max) {
				max = arr8[i][j];
			}
		}
		cout << endl;
	}
	cout << max << "-maximum element." << endl;
	const int column9 = 4;
	const int row9 = 5;
	int arr9[row9][column9] = {};
	cnt = 0;
	for (int i = 0; i < row9; i++)
	{
		for (int j = 0; j < column9; j++)
		{
			arr9[i][j] = rand() % 11 - 5;
			cout << arr9[i][j] << " ";
			if (arr9[i][j] < 0) {
				cnt += arr9[i][j];
			}
		}
		cout << endl;
	}
	cout << cnt << "-the sum of all negative elements." << endl;
	cout << endl << endl;
	const int cube_column = 11;
	const int cube_row = 11;
	int N = 11;
	int cube[cube_row][cube_column] = {};
	cnt = 0;
	max = cube[1][1];
	for (int i = 0; i < cube_row; i++)
	{
		for (int j = 0; j < cube_column; j++)
		{
			cube[i][j] = rand() % 100;
			cout << setw(3) << cube[i][j] << " ";
		}

		cout << endl;
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (i <= j) {
				cout << setw(3) << cube[i][j] << " ";
				if (cube[i][j] > max) {
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				}
			}
			else {
				cout << "    ";
			}


		}
		cout << endl;
	}
	cout << "Max in a - " << max << endl;

	max = 0;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{

			
			if (i >= j) {
				cout << setw(3) << cube[i][j] << " ";
				if (cube[i][j] > max) {
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				}
			}

			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	

	cout << "Max in b - " << max << endl;
	max = 0;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			
			if (i <= j && i + j <= N - 1) {
					cout << setw(3) << cube[i][j] << " ";
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				
			}
			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	cout << "Max in c - " << max << endl;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			
			if (i >= j && i + j >= N - 1) {
					cout << setw(3) << cube[i][j] << " ";
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				
			}
			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	cout << "Max in d - " << max << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			
			if (i >= j && i + j >= N - 1 || i <= j && i + j <= N - 1) {
					cout << setw(3) << cube[i][j] << " ";
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				
			}
			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	cout << "Max in e - " << max << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			
			if (i <= j && i + j >= N - 1 || i >= j && i + j <= N - 1) {
					cout << setw(3) << cube[i][j] << " ";
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				
			}
			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	cout << "Max in f - " << max << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			
			if (i >= j && i + j <= N - 1) {
					cout << setw(3) << cube[i][j] << " ";
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				
			}
			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	cout << "Max in g - " << max << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			
			if (i <= j && i + j >= N - 1) {
					cout << setw(3) << cube[i][j] << " ";
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				
			}
			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	cout << "Max in h - " << max << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (i + j <= N - 1) {
				
					cout << setw(3) << cube[i][j] << " ";
					if (max < cube[i][j]) {
						max = cube[i][j];
					}
				
			}
			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	cout << "Max in i - " << max << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (i + j >= N - 1) {
					cout << setw(3) << cube[i][j] << " ";
					if (max < cube[i][j]) {
						max = cube[i][j];
					}

				
			}
			else {
				cout << "    ";
			}
		}
		cout << endl;
	}
	cout << "Max in j - " << max << endl;

}