#include <bits/stdc++.h>
using namespace std;
void duplicates(int *arr, int size);
void MergeSort(int *arr, int size);
void MergeUtil(int *arr, int *temp, int size, int lower, int mid, int upper);
void MergeSort_x(int *arr, int *temp, int size, int lower, int upper);
int main()
{
    int arr[5] = {3, 2, 3, 4, 2};
    // duplicates(arr, 5);
    duplicates(arr, 5);
}

void MergeUtil(int *arr, int *temp, int size, int lower, int mid, int upper)
{
    int lowerStart = lower;
    int lowerStop = mid;
    int upperStart = mid + 1;
    int upperStop = upper;
    int count = lower;
    while (lowerStart <= lowerStop && upperStart <= upperStop)
    {
        if (arr[lowerStart] < arr[upperStart])
        {
            temp[count++] = arr[lowerStart++];
        }
        else
        {
            temp[count++] = arr[upperStart++];
        }
    }
    while (lowerStart <= lowerStop)
    {
        temp[count++] = arr[lowerStart++];
    }
    while (upperStart <= upperStop)
    {
        temp[count++] = arr[upperStart++];
    }
    for (int i = lower; i <= upper; i++)
    {
        arr[i] = temp[i];
    }
    free(temp);
}

void MergeSort_x(int *arr, int *temp, int size, int lower, int upper)
{
    if (lower >= upper)
    {
        return;
    }
    int mid = lower + (upper - lower) / 2;
    MergeSort_x(arr, temp, size, lower, mid);
    MergeSort_x(arr, temp, size, mid + 1, upper);
    MergeUtil(arr, temp, size, 0, mid, upper);
}
void MergeSort(int *arr, int size)
{
    int *temp = (int *)malloc(size * sizeof(int));
    int lower = 0;
    int upper = size - 1;
    MergeSort_x(arr, temp, size, lower, upper);
}
void duplicates(int *arr, int size)
{
    MergeSort(arr, size);
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            cout << arr[i] << " ";
        }
    }
    cout << "" << endl;
}