#include <iostream>
using namespace std;
int* FindMin(int* a, int* b, int* c)
{
    if (*a < *b && *a < *c)
        return a;
    else if (*b < *c and *b < *a)
        return b;
    else
        return c;
}
void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 10;
    }
}
void ShowArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }cout << endl;
}
void ReverseShowArray(int* arr, int size)
{
    for (int i = size-1; i >=0; i--)
    {
        cout << *(arr + i) << " ";
    }cout << endl;
}   
int* MaxElement(int* arr, int size)
{
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max) {
            max = arr + i;
        }
    }
    return max;
}
int* MinElement(int* arr, int size)
{
    int* min = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < *min) {
            min = arr + i;
        }
    }
    return min;
}
void Changer(int *Min,int *Max) {
    int temp = *Min;
    *Min = *Max;
    *Max = temp;
}
void OddEavenChanger(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
int main()
{
    srand(time(NULL));
    int a = 5;
    int b = 10;
    int d = 15;
    int* pa = &a;
    int* pb = &b;
    int* pd = &d;
    cout <<"Product = " << (*pa) * (*pb) * (*pd) << endl;
    cout <<"Arithmetic mean = " << ((*pa) + (*pb) + (*pd))/3 << endl;
    cout <<"Minimal = " << *(FindMin(pa,pb,pd)) << endl;

    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    ReverseShowArray(arr, size);
    int* Max = MaxElement(arr, size);
    int* Min = MinElement(arr, size);
    cout << "Maximal = " << *(Max) << endl;
    cout << "Minimal = " << *(Min) << endl;
    Changer(Min, Max);
    ShowArray(arr, size);
    OddEavenChanger(arr, size);
    ShowArray(arr, size);

}