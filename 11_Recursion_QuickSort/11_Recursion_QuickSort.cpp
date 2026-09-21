#include <iostream>
using namespace std;
void Foo(int a) {
    if (a==0) {
        return;
    }
    cout << "Hello World!  "<<a<<endl;
    a--;
    Foo(a);
}
int Summa(int arr[], int size) {
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        summa += arr[i];
    }
    return summa;
}
int SummaRecursion(int arr[], int size, int index=0) 
{
    if (index == size) {
        return arr[index];
    }
    return arr [index]+ SummaRecursion(arr,size,index+1);
}
void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 40 - 20;
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
void QuickSort(int arr[], int B, int E)
{
    int i = B , j = E;
    int temp, p;
    p = arr[(B + E) / 2];
    do
    {
        while (arr[i] < p)i++;
        while (arr[j] > p)j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i<=j);
    if (B < j)QuickSort(arr, B, j);
    if (i>E)QuickSort(arr, i, E);
}
int BinarySearch(int arr[], int size, int key) {
    int B = 0, E = size - 1;
    while (true)
    {
        int p = (B + E) / 2;
        if (key > arr[p])
        {
            B = p + 1;
        }
        else if (key < arr[p]) {
            E = p - 1;
        }
        else if (key == arr[p])return p;
        if (B > E)return -1;
    }
}
int main()
{
    Foo(10);
    const int size = 10;
    int arr[size] = { 1,8,4,5,6,4,7,9,11,2 };
    int summa = Summa(arr, size);
    cout<<"Summa = "<< summa << endl;
    InitArray(arr, size);
    ShowArray(arr, size);
    QuickSort(arr,0, size-1);
    ShowArray(arr, size);
}