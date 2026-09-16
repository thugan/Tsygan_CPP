#include <iostream>
using namespace std;

int MaxElement(int a,int b)
{
	return (a > b) ? a : b;
}
float MaxElement(float a,float b)
{
	return (a > b) ? a : b;
}
double MaxElement(double a, double b)
{
	return (a > b) ? a : b;
}

int MaxElement(int a, int b,int c)
{
	if (a > c && a > b) {
		return a;
	}
	else if (b > c && b > a) {
		return b;
	}
	else {
		return c;
	}
}
float MaxElement(float a, float b,float c)
{
	if (a > c && a > b) {
		return a;
	}
	else if (b > c && b > a) {
		return b;
	}
	else {
		return c;
	}
}
double MaxElement(double a, double b, double c)
{
	if (a > c && a > b) {
		return a;
	}
	else if (b > c && b > a) {
		return b;
	}
	else {
		return c;
	}
}

int MinElement(int a, int b)
{
	return (a < b) ? a : b;
}
float MinElement(float a, float b)
{
	return (a < b) ? a : b;
}
double MinElement(double a, double b)
{
	return (a < b) ? a : b;
}

int MinElement(int a, int b, int c)
{
	if (a < c && a < b) {
		return a;
	}
	else if (b < c && b < a) {
		return b;
	}
	else {
		return c;
	}
}
float MinElement(float a, float b, float c)
{
	if (a < c && a < b) {
		return a;
	}
	else if (b < c && b < a) {
		return b;
	}
	else {
		return c;
	}
}
double MinElement(double a, double b, double c)
{
	if (a < c && a < b) {
		return a;
	}
	else if (b < c && b < a) {
		return b;
	}
	else {
		return c;
	}
}

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void InitMatrix(int arr[][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void ShowMatrix(int arr[][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
template<typename T_arr>
T_arr Arr_Mean(T_arr arr, int size)
{
	int counter = 1;
	int sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += i;
		counter += 1;
	}
	return sum / counter;
}

template<typename T_arr1>
T_arr1 MaxElement(T_arr1 arr[], int size)
{
	T_arr1 max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
template<typename T_arr2>
T_arr2 MaxElementMatrix(T_arr2 arr[][10], int rows,int cols)
{
	T_arr2 max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}

int Max_Initialization_Show(int arr[][10], int rows, int cols)
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j) {
				if (arr[i][j] > max)
					max = arr[i][j];
			}
		}
	}
	return max;
}
float Max_Initialization_Show(float arr[][10], float rows, float cols)
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j) {
				if (arr[i][j] > max)
					max = arr[i][j];
			}
		}
	}
	return max;
}
double Max_Initialization_Show(double arr[][10], double rows, double cols)
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j) {
				if (arr[i][j] > max)
					max = arr[i][j];
			}
		}
	}
	return max;
}
int main()
{
	srand(time(NULL));
	cout << MinElement (1, 2) << endl << endl << endl;
	cout << MinElement(1.1, 2.4, 8.5) << endl << endl << endl;
	const int size1 = 10;
	int arr1[size1] = {};
	InitArray(arr1, size1);
	ShowArray(arr1, size1);
	cout << Arr_Mean(arr1, size1) << endl << endl << endl;
	cout << MaxElement(arr1, size1) << endl << endl << endl;
	const int rows = 10;
	const int cols = 10;
	int arr2[rows][cols];
	InitMatrix(arr2, rows, cols);
	ShowMatrix(arr2, rows, cols);
	cout<<MaxElementMatrix(arr2, rows, cols)<<endl<<endl<<endl;
	const int rows2 = 10;
	const int cols2 = 10;
	int arr3[rows2][cols2];
	cout<<Max_Initialization_Show(arr3, rows2, cols2)<<endl << endl << endl;
}