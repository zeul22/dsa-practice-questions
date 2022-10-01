#include <bits/stdc++.h>
using namespace std;
void QuickSort(int *arr, int size);
void QuickSort_func();
void swapPos(int *arr, int x, int y);
void TravArr(int *arr, int size);
int main()
{
    int arr[5] = {4, 2, 1, 0, 7};
    QuickSort(arr, 5);
    TravArr(arr, 5);
}

void TravArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}
void swapPos(int *arr, int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
void QuickSort_func(int *arr, int lower, int upper)
{
    if (upper <= lower)
    {
        return;
    }
    int pivot = arr[lower];
    int start = lower;
    int stop = upper;
    while (lower < upper)
    {
        while (arr[lower] <= pivot)
        {
            lower++;
        }
        while (arr[upper] > pivot)
        {
            upper--;
        }

        if (lower < upper)
        {
            swapPos(arr, upper, lower);
        }
    }
    swapPos(arr, upper, start);
    QuickSort_func(arr, start, upper - 1);
    QuickSort_func(arr, upper + 1, stop);
}

void QuickSort(int *arr, int size)
{
    QuickSort_func(arr, 0, size - 1);
}