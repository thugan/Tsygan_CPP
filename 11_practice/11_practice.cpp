#include <iostream>
using namespace std;
int stepin(int num,int step) {
    if (step == 1) {
        return num;
    }
    return num * stepin(num, step - 1);
}
void zirki(int count) {
    cout << "*";
    if (count == 1) {
        return;
    }
    zirki(count - 1);
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int SumInRange(int F,int L) {
    int sum = 0;
    sum += F;
    if (F == L) {
        return sum;
    }
    return sum + SumInRange(F+1, L);
}
void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 40 - 20;
    }
}

int FindMinSiq(int arr[], int size, int min_sum1,int el1, int start = 0, int end = 9) {
    int sum = 0;
    int el=el1;
    int min_sum = min_sum1;
    for (int i = start; i <= end; i++)
    {
        sum += arr[i];
    }
    if (start == 0) {
        min_sum = sum;
        el = 0;
    }
    if (sum < min_sum) {
        min_sum = sum;
        el = start;
    }
    if (end == size - 1) {
        return el;
    }
    return FindMinSiq(arr, size , min_sum, el,start + 1, end + 1);
}
int main()
{
    srand(time(NULL));
    cout<<stepin(5, 3)<<endl;
    zirki(3);
    cout << endl;
    cout<<SumInRange(1, 5)<<endl;
    //const int size = 100;
    const int size = 20;
    int arr[size] = { 1,1,1,1,1,1,3,4,5,6,7,3,5,6,7,4,6,7,43,5 };
    /*InitArray(arr, size);*/
    ShowArray(arr, size);
    cout << FindMinSiq(arr, size,100000,100000 ) << endl;
}