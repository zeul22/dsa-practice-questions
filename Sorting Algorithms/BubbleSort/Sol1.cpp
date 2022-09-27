#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int *arr, int size);
void swap(int x, int y);
void TravArray(int *arr, int size);
int main()
{
    int arr[5] = {4, 1, 3, 5, 2};
    BubbleSort(arr, 5);
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = x;
}
void TravArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}

void BubbleSort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    TravArray(arr, size);
}