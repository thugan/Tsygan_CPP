#include <iostream>
using namespace std;

int main()
{
	int N = 10;
	int choise;
	cout << "Enter number from 0 to 10 : ";
	cin >> choise;
	if (choise == 0) {
		
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i <= j) {
					cout << " *";
				}
				else {
					cout << "  ";
				}

			}
			cout << endl;
		}
	}
	else if (choise == 1) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i >= j) {
					cout << " *";
				}
				else {
					cout << "  ";
				}

			}
			cout << endl;
		}
	}
	
	else if (choise == 2) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i <= j && i + j <= N - 1) {
					cout << " *";
				}
				else {
					cout << "  ";
				}

			}
			cout << endl;
		}
	}
	else if (choise == 3) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i >= j && i + j >= N - 1) {
					cout << " *";
				}
				else {
					cout << "  ";
				}

			}
			cout << endl;
		}
	}
	else if (choise == 4) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i >= j && i + j >= N - 1 || i <= j && i + j <= N - 1) {
					cout << " *";
				}
				else {
					cout << "  ";
				}

			}
			cout << endl;
		}
	}
	else if (choise == 5) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i <= j && i + j >= N - 1 || i >= j && i + j <= N - 1) {
					cout << " *";
				}
				else {
					cout << "  ";
				}

			}
			cout << endl;
		}
	}
	else if (choise == 6) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i >= j && i + j <= N - 1) {
					cout << " *";
				}
				else {
					cout << "  ";
				}

			}
			cout << endl;
		}
	}
	else if (choise == 7) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i <= j && i + j >= N - 1) {
					cout << " *";
				}
				else {
					cout << "  ";
				}

			}
			cout << endl;
		}
	}
	else if (choise == 8) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i + j <= N - 1) {
					cout << " *";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	else if (choise == 9) {
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i + j >= N - 1) {
					cout << " *";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	else {
		cout << "I dont know this number!" << endl;
	}
	int n;
	cout << "Enter number: ";
	cin >> n;
	for (int i = 1; i <=3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i<< " ";
		}
		cout << endl;
	}
	N = 10;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i + j == N - 1 || i == j) {
				cout << " 0";
			}
			else {
				cout << " 1";
			}
		}
		cout << endl;
	}
	int sum=0;
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i << " ";
			sum += i;
		}
		cout << endl;
	}
	cout << "SUM : " << sum<<endl;
	for (int i = 1; i <= 15; i++)
	{
		if (i%2==0){
			for (int j = 0; j < 8; j++)
			{
				cout << i << " ";
			}
		}
		else {
			for (int j = 0; j < 10; j++)
			{
				cout << 1 << " ";
			}
		}
		cout << endl;
	}
	for (int i = 1; i <= 30; i++)
	{
		if (i%2!=0){
			for (int j = 1; j <= i; j++)
			{
				cout << j << " ";
			}
		}
		else {
			for (int j = 0; j < 5; j++)
			{
				cout << 1 << " ";
			}
		}
		cout << endl;
	}
	for (int i = 1; i <= 10; i++)
	{
		cout << "Table division by " << i<<endl;
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;;
		}
		cout << endl;
	}
	int a,b,cnt=0;
	cout << "Enter number a : ";
	cin >> a;
	cout << "Enter number b : ";
	cin >> b;
	for (int i = 0; i <= b; i++)
	{
		if (i >= a) {
			if (i % 12 == 0) {
				cnt += 1;
			}
		}
	}
		cout << cnt<<" --- the number of integers divisible by 12 between a and b, inclusive!!";
}