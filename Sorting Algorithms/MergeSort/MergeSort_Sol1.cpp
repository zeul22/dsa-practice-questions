#include <bits/stdc++.h>
using namespace std;
#define Max 100
void itr_MergeSort(int *arr, int low, int mid, int high);
void MergeSort(int *arr, int size);
void TravArr(int *arr, int size);

int main()
{
    int arr[5] = {5, 1, 3, 4, 9};
    MergeSort(arr, 5);
    TravArr(arr, 5);
    int arr1[10] = {5, 1, 3, 4, 9, 3, 7, 25, -4, 44};
    MergeSort(arr1, 10);
    TravArr(arr1, 10);
}

void TravArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}

void itr_MergeSort(int *arr, int low, int mid, int high)
{
    int tempArr[Max];
    int lowerStart = low;
    int lowerStop = mid;
    int upperStart = mid + 1;
    int upperStop = high;
    int count = low;
    while (lowerStart <= lowerStop && upperStart <= upperStop)
    {
        if (arr[lowerStart] <= arr[upperStart])
        {
            tempArr[count++] = arr[lowerStart++];
        }
        else
        {
            tempArr[count++] = arr[upperStart++];
        }
    }
    while (lowerStart <= lowerStop)
    {
        tempArr[count++] = arr[lowerStart++];
    }

    while (upperStart <= upperStop)
    {
        tempArr[count++] = arr[upperStart++];
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = tempArr[i];
    }
}

void MergeSort(int *arr, int size) // Iterative MergeSort
{
    int p, l, mid, h, i;
    for (p = 2; p <= size - 1; p = p * 2)
    {
        for (i = 0; i + p - 1 < size - 1; i = i + p)
        {
            l = i;
            h = i + p - 1;
            mid = l + (h - l) / 2;
            itr_MergeSort(arr, l, mid, h);
        }
    }
    if (p / 2 < size - 1)
    {
        itr_MergeSort(arr, 0, p / 2 - 1, size - 1);
    }
}