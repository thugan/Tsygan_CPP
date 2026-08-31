#include <iostream>
using namespace std;
int main()
{
    int age = 15;
    int Age = 28;
    int age3 = 28;
    cout << age << endl;
    cout << "age = " << age;

    int dayInYear_2000 = 366;
    const int hourInDay = 24;
    int hourIn_2000year;
    hourIn_2000year = dayInYear_2000 * hourInDay;
    cout << "Hours in 200 year = " << hourIn_2000year << endl;
    





    float discount = 0.05;
    float costProduct = 34.99;
    int count = 5;
    cout << "Enter cost product : " ;
    cin >> costProduct;
    float price = count * costProduct - count * costProduct * discount;
    cout << "You need to pay : " << price <<endl;
}