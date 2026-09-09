#include <iostream>
using namespace std;

int main()
{
    /*const int size1 = 10;
    int arr1[size1] = {};
    int sum = 1;
    for (int i = 0; i < size1; i++)
        {
            cout << "Enter number : " << i + 1 << " ------> ";
            cin >> arr1[i];
            sum *= arr1[i];
        }
    cout << "Product : " << sum << endl;;

    const int size2 = 7;
    int arr2[size2] = {};
    int max = arr2[0];
    int min = arr2[0];
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter number : " << i + 1 << " ------> ";
        cin >> arr2[i];
    }
    for (int i = 0; i < size2; i++)
    {
        if (arr2[i] > max) {
            max = arr2[i];
        }
        if (arr2[i] < min) {
            min = arr2[i];
        }
    }
    cout << "\nMax = " << max << endl;
    cout << "\nMin = " << min << endl;

    int sum2 = 0;
    long arr3[size2] = {3,2,8,9,10,12,7};
    for (int i = 0; i < size2; i++)
      {
          cout << arr3[i] << " ";
      }
    cout << endl;
    for (int i = 0; i < size2; i++)
    {
        if (arr3[i] % 2 == 0) {
            sum2 += arr3[i];
        }
    }
    cout << "The sum of numbers that are exactly divisible by 2 : " << sum2 << endl;

    int arr4[size1] = {};
    int in;
    for (int i = 0; i < size1; i++)
        {
            cout << "Enter number : " << i + 1 << " ------> ";
            cin >> in;
            arr4[i] = in * in;
        }
    for (int i = 0; i < size1; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl <<endl;
    for (int i = size1-1; i >= 0; i--)
    {
        cout << arr4[i] << " ";
    }

    int arr5[size1] = {1,-20,123,-94,3,-3,458,39,-12,-6};
    for (int i = 0; i < size1; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size1; i++)
    {
        if (arr5[i] < 0) {
            arr5[i] *= -1;
        }
    }
    for (int i = 0; i < size1; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;*/
    const int year = 12;
    int pay[year] = {};
    int low;
    int hight;
    for (int i = 0; i < year; i++)
    {
        cout << "Enter " << i + 1 << " person salary : ";
        cin >> pay[i];
    }
    cout << "Lowest number in range : ";
    cin >> low;
    cout << "Hightest number in range : ";
    cin >> hight;
    cout << "Numbers in range ( " << low << " to " << hight << " ) : " << endl;
    for (int i = 0; i < year; i++)
    {
        if (pay[i] >= low && pay[i] <= hight) {
            cout << pay[i] << " ";
        }
    }

}