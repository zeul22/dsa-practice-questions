#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int *arr, int size);
void TravArray(int *arr, int size);
int main()
{
    int arr[5] = {4, 1, 3, 5, 2};
    BubbleSort(arr, 5);
    TravArray(arr, 5);
    return 0;
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
    if (size == 0)
    {
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    BubbleSort(arr, size - 1);
}