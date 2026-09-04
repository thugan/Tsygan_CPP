#include <iostream>
using namespace std;

int main()
{
	//const int USA = 1;
	//const int France = 33;
	//const int Ukraine = 380;
	//const int Italy = 39;
	//const int Australia = 61;

	/*enum countries{ USA = 1 , France = 33 , Ukraine = 380,Italy = 39,Australia = 61};
	cout << USA << endl;
	cout << France << endl;
	cout << Ukraine << endl;

	enum coins{penny=1,niekel=5,dime=10,quarter=25,half=50,dollar_coin=100};

	enum categories{Milk,Chemestry,Bread,Meat,Bakalia};
	cout << Milk << endl;
	cout << Chemestry << endl;
	cout << Bread << endl;
	cout << Meat << endl;
	cout << Bakalia << endl;

	int a;
	categories categor;
	categor = Milk;

	string category;
	category = "Bread";
	category = "Meat";
	category = "Milk";
	category = "Abracadabra";
	category = "BlaBlaBlaBla";

	int coin;
	cout << "Enter value of American coin : ";
	cin >> coin;
	switch (coin)
	{
	case penny:
		cout << "Penny = " << penny << endl;break;
	case niekel:
		cout << "Niekel = " << niekel << endl;break;
	case dime:
		cout << "Dime = " << dime << endl;break;
	case quarter:
		cout << "Quarter = " << quarter << endl;break;
	case half:cout << "Half = " << half << endl; break;
	case dollar_coin:
		cout << "Dollar coin = " << dollar_coin << endl; break;
	default:
		cout << "Error coin" << endl;break;
	}*/
	/*while (true)
	{

	}
	do
	{

	} while (true);
	for (int i = 0; i < 10; i++)
	{

	}*/

	/*int counter = 1;
	while (counter <= 15)
	{
		cout << "I did " << counter << " squat!" << endl;
		counter++;
	}*/
	float a, b, res;
	char key;
	/*
	
	cout << "Enter number a : "; cin >> a;
	cout << "Enter number b : "; cin >> b;
	cout << "Choose the operation : " << endl;
	cout << " [+] - add numbers " << endl;
	cout << " [-] - sub numbers " << endl;
	cout << " [*] - multy numbers " << endl;
	cout << " [/] - div numbers " << endl;
	cout << " [e] - exit " << endl;
	cin >> key;
	while (key != 'e')
	{
		

		switch (key)
		{
		default:
			cout << "Error choice" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Res = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Res = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Res = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Res = " << res << endl;
			break;
		case 'e':
				cout << "Have a nice day!" << endl;
		
		}
		cout << "Enter number a : "; cin >> a;
		cout << "Enter number b : "; cin >> b;
		cout << "Choose the operation : " << endl;
		cout << " [+] - add numbers " << endl;
		cout << " [-] - sub numbers " << endl;
		cout << " [*] - multy numbers " << endl;
		cout << " [/] - div numbers " << endl;
		cout << " [e] - exit " << endl;
		cin >> key;
	}
	*/
	/*
	do
	{
		cout << "Choose the operation : " << endl;
		cout << " [+] - add numbers " << endl;
		cout << " [-] - sub numbers " << endl;
		cout << " [*] - multy numbers " << endl;
		cout << " [/] - div numbers " << endl;
		cout << " [e] - exit " << endl;
		cin >> key;
		cout << "Enter number a : "; cin >> a;
		cout << "Enter number b : "; cin >> b;
		switch (key)
		{
		default:
			cout << "Error choice" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Res = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Res = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Res = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Res = " << res << endl;
			break;
		case 'e':
			cout << "Have a nice day!" << endl;
		}

	} while (key != 'e');
	*/
	int i = 1;
	while (i <= 10) {
		cout << i << " ";
		i++;
	}
	cout << endl;
	int counter = 1;
	do
	{
		cout << counter << " ";
		counter++;
	} while (counter <=10);

	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i<<" ";
	}cout << endl;

	int magicnumber = 2;
	cout << "\n=======================================";
	cout << "\t My number is between 1 and 10" << endl;
	cout << "=======================================";
}