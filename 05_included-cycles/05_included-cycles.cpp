#include <iostream>
using namespace std;

int main()
{
	

	/*for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << "\n--------------------------------------------\n";
	}*/
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 15; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	//cout << "------------------While-------------------\n";
	//int lenght = 10;
	//int line_count = 1;
	//int count_star;

	//while (line_count<=lenght)
	//{
	//	count_star = 1;
	//	while (count_star<=lenght)
	//	{
	//		cout << " *";
	//		count_star++;
	//	}
	//	cout << endl;
	//	line_count++;
	//}

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i == j) {
				cout << " *";
			}
			else {
				cout << " -";
			}
		}
		cout << endl;
	}
	cout << endl;
	int N = 10;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i+j == N-1) {
				cout << " *";
			}
			else {
				cout << " -";
			}
		}
		cout << endl;
	}
	N = 11;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (i >= j && i+j>=N-1) {
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
			
		}
		cout << endl;
	}

	for (int i = 0; i < 7; i++)
	{
		for (int x = 0; x < 11; x++)
		{
			cout << "|###|";
		}
		cout << endl;
	}
}