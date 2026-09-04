#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	while (i <= 100)
	{
		cout << i << " ";
		i++;
	}cout << endl;
	int x = 1;
	while (x <= 200)
	{
		if (x % 2 == 0)
		{
			cout << x << " ";
			
		}
		x++;
	}cout << endl;
	int N, counter = 1,num,res = 0;
	cout << "Enter how many times you need to enter number: ";
	cin >> N;
	while (counter<=N)
	{
		cout << "Enter " << counter << " num : ";
		cin >> num;
		if (num % 2 == 0)
		{
			res += num;
		}
		counter++;
	}
	cout << "Result " << res << " !"<<endl;
	int bong = 0;
	for (int i = 1; i <= 12; i++)
	{
		bong += i;
		cout << "At " << i << " A.M. Clock makes " << i << " bongs!" << endl;
	}
	cout << "In all times clock bonged " << bong << " times" << endl;
	int user,result=0;
	for (;;)
	{
		cout << "Enter number (0 to see result) : ";
		cin >> user;
		result += user;
		if (user==0)
		{
			cout << "Result : " << result << ". Goodbye!";
			break;
		}
	}
}