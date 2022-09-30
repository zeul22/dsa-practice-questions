#include <iostream>
using namespace std;
void InsertionsSort(int *arr, int size);
void TravArray(int *arr, int size);
int main()
{
    int arr[6] = {4, 5, 1, 2, 7, 0};
    InsertionsSort(arr, 6);
    TravArray(arr, 6);
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
void InsertionsSort(int *arr, int size)
{
    if (size <= 1)
    {
        return;
    }
    InsertionsSort(arr, size - 1);
    int j = size - 2;
    int last = arr[size - 1];
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}