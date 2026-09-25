#include <iostream>
#include <conio.h>
using namespace std;
double dob(int* a, float* b, double* c) {
    return (*a) * (*b) * (*c);
}
int* CreateArray(int size)
{
	int* arr = new int[size];
	return arr;
}
void InitArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
int* AddNewElement(int* arr, int* size, int number)
{
	int* temp = new int[*size + 1];
	for (int i = 0; i < *size; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size] = number;
	delete[]arr;
	arr = temp;
	(*size)++;
	return arr;
}
int* DelLastElement(int* arr, int* size)
{
	int* temp = new int[*size - 1];
	for (int i = 0; i < (*size)-1; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr;
	arr = temp;
	(*size)--;
	return arr;
}
int* DelElementByIndex(int* arr, int* size,int index)
{
	int* temp = new int[*size - 1];
	for (int i = 0; i < (*size)-1; i++)
	{
		if (i>=index) {
			temp[i] = arr[i+1];
		}
		else if (i < index) {
			temp[i] = arr[i];
		}
		
	}
	delete[]arr;
	arr = temp;
	(*size)--;
	return arr;
}
int* AddNewElementInIndex(int* arr, int* size,int index, int number)
{
	int* temp = new int[*size + 1];
	for (int i = 0; i < *size+1; i++)
	{
		if (i == index) {
			temp[i] = number;
			
		}
		else if (i > index) {
			temp[i] = arr[i-1];
		}
		else {
			temp[i] = arr[i];
		}
		
	}
	delete[]arr;
	arr = temp;
	(*size)++;
	return arr;
}
int main()
{
    /*int* a = new int(7) ;
    float* b = new float(12.7) ;
    double* c = new double(10.07) ;
    cout << dob(a, b, c) << endl;
    cout <<"a = "<< * a << " b = " << *b << " c = " << *c << endl;
    delete a;
    delete b;
    delete c;*/

	
	int size = 5;
	int number;
	int index;
	int* arr = CreateArray(size);
	InitArray(arr, size);
	char choice = '1';
	while (true)
	{
		cout << "Enter what you want to do: \n1-Show array\n2-Delete last element\n3-Add new element in the end\n4-Add new element in index\n5-Delete by index\n6-Leave program\nEnter your choise: ";
		choice = _getch();
		cout << endl;
		system("cls");
		if (choice == '1') {
			cout << "Your array: " << endl;
			ShowArray(arr, size);
			cout << endl;
		}
		else if (choice == '2') {
			arr = DelLastElement(arr, &size);
			cout << "Your element has deleted! " << endl;
		}
		else if (choice == '3') {
			cout << "Enter your new element : " << endl;
			cin >> number;
			arr = AddNewElement(arr, &size, number);
			cout << "Number added!" << endl;
		}
		else if (choice == '4') {
			cout << "Enter your new element : " << endl;
			cin >> number;
			cout << "Enter index for new element : " << endl;
			cin >> index;
			arr = AddNewElementInIndex(arr, &size, index, number);
			cout << "Number added!" << endl;
		}
		else if (choice == '5') {
			cout << "Enter index to delete element : " << endl;
			cin >> index;
			arr = DelElementByIndex(arr, &size, index);
			cout << "Number deleted!" << endl;
		}
		else if (choice == '6')break;
		else {
			cout << "Idk this element!" << endl;
		}
	}
	delete[] arr;
}