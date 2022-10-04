#include <bits/stdc++.h>
using namespace std;
void SelSort(int *arr, int size);
void TravArray(int *arr, int size);
void SelSort_util(int *arr, int start, int size);
int main()
{
    int arr[6] = {-4, 81, -10, 2, 3, 0};
    SelSort(arr, 6);
    TravArray(arr, 6);
}

void TravArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}

void SelSort(int *arr, int size)
{
    int start = 0;
    SelSort_util(arr, start, size);
}

void SelSort_util(int *arr, int start, int size)
{
    if (start >= size - 1)
    {
        return;
    }
    int min = start;
    for (int i = start; i < size; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    int temp = arr[min];
    arr[min] = arr[start];
    arr[start] = temp;
    SelSort_util(arr, start + 1, size);
}