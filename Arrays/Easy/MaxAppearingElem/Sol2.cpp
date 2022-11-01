#include <bits/stdc++.h>
using namespace std;
void MaxAppearElem(int *arr, int size);
void MergeSort(int *arr, int size);
void MergeSort_part2(int *arr, int *temp, int lowerIndex, int upperIndex);
void MergeSort_util(int *arr, int *temp, int lowerIndex, int midIndex, int upperIndex);
void TravArr(int *arr, int size);
int main()
{
    int arr[5] = {1, 2, 2, 3, 2};
    MergeSort(arr, 5);
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

void MergeSort_util(int *arr, int *temp, int lowerIndex, int midIndex, int upperIndex)
{
    int lowerStart = lowerIndex;
    int lowerStop = midIndex;
    int upperStart = midIndex + 1;
    int upperStop = upperIndex;
    int count = lowerIndex;
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

    for (int i = lowerIndex; i <= upperIndex; i++)
    {
        arr[i] = temp[i];
    }
}
void MergeSort_part2(int *arr, int *temp, int lowerIndex, int upperIndex)
{
    if (lowerIndex >= upperIndex)
    {
        return;
    }
    int mid = lowerIndex + (lowerIndex + upperIndex / 2);
    MergeSort_part2(arr, temp, lowerIndex, mid);
    MergeSort_part2(arr, temp, mid + 1, upperIndex);
    MergeSort_util(arr, temp, lowerIndex, mid, upperIndex);
}

void MergeSort(int *arr, int size)
{
    int *temp = (int *)malloc(size * (sizeof(int)));
    MergeSort_part2(arr, temp, 0, size - 1);
}
void MaxAppearElem(int *arr, int size)
{
}