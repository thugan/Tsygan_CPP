#include <iostream>
using namespace std;

int main()
{
    //int train[3];
    //train[0] = 2;
    //train[1] = 4;
    //train[2] = 8;
    //cout << "Vagon 1 :" << train[0] << endl;
    //cout << "Vagon 2 :" << train[1] << endl;
    //cout << "Vagon 3 :" << train[2] << endl;

    //const int size = 12;

    //int marks[size];
    //marks[0] = 1;
    //marks[1] = 12;
    //marks[2] = 2;
    //marks[3] = 7;
    //marks[4] = 8;
    //marks[5] = 9;
    //marks[6] = 12;
    //marks[7] = 7;
    //marks[8] = 6;
    //marks[9] = 4;
    //marks[10] = 10;
    //marks[11] = 9;
    //cout << "Marks : " << marks[0] << " " << marks[3] << " " << marks[11] << " !" << endl;


    //const int size = 10;
    //int arr[size] = {1,2,3,4,5,6,7,8,9,10};
    //
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << " ";
    //}
    //cout << endl;

    //int arr2[size] = {1,2,3};
    //
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr2[i] << " ";
    //}
    //cout << endl;

    //int arr3[size] = {1};
    //
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr3[i] << " ";
    //}
    //cout << endl;

    //int arr4[size] = {};
    //for (int i = 0; i < size; i++)
    //{
    //    cout << "Enter number : " << i + 1 << " ------> ";
    //    cin >> arr4[i];
    //}
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr4[i] << " ";
    //}
    cout << endl;
    const int SIZE = 10;
    int summa = 0;
    int first_negative;
    int last_positive;
    //int arr5[SIZE] = {5,-9,2,-8,15,-2,1,-1,8,-1};
    int arr5[SIZE] = {5,-9,2,-8,15,-2,1,-1,8,-1};
    int max = arr5[0];
    int min = arr5[0];
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr5[i] << " ";

    }
    for (int i = SIZE-1; i >= 0; i--)
    {
        if (arr5[i] < 0) {
            first_negative = arr5[i];
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (arr5[i] > 0) {
            last_positive = arr5[i];
        }
        if (arr5[i] < 0) {
            summa += arr5[i];
        }
        if (arr5[i] > max) {
            max = arr5[i];
        }
        if (arr5[i] < min) {
            min = arr5[i];
        }
    }
    cout << "\nSumma = " << summa << endl;
    cout << "\nMax = " << max << endl;
    cout << "\nMin = " << min << endl;

}