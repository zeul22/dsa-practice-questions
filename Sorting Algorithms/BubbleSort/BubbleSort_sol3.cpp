#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int *arr, int size);
void TravArr(int *arr, int size);
int main()
{
    int arr[5] = {3, 2, 1, 4, 5};
    BubbleSort(arr, 5);
    TravArr(arr, 5);
}

void BubbleSort(int *arr, int size) // Modified BubbleSort
{
    int swapped = 1;
    for (int i = 0; i < size && swapped; i++) // won't iterate if the array is already sorted!
    {
        swapped = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
        }
    }
}
void TravArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}