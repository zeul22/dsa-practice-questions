#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void BucketSort(int *arr, int size, int range);
int main()
{
    int arr[7] = {9, 2, 1, 4, 5, 3, 8};
    BucketSort(arr, 7, 10);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}

void BucketSort(int *arr, int size, int range) // understand what bucket sort and radix sort is
{
    int *temp = (int *)malloc(range * sizeof(int));
    int i, j;
    for (i = 0; i < range; i++)
    {
        temp[i] = 0;
    }
    for (i = 0; i < size - 1; i++)
    {
        temp[arr[i]]++;
    }

    j = 0;

    for (i = 0; i < range; i++)
    {
        for (; temp[i] > 0; (temp[i])--)
        {
            temp[j++] = i;
        }
    }
    free(temp);
}