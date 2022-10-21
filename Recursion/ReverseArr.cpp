#include <iostream>
#include <math.h>
using namespace std;
void RevArr(int *arr, int size, int i);
void RevArr_2(int *arr, int size, int start, int end);
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr1[5] = {4, 8, 12, 16, 20};
    RevArr(arr, 6, 0);
    cout << "" << endl;
    RevArr(arr1, 5, 0);
    cout << "" << endl;
    RevArr_2(arr, 6, 0, 5);
    return 0;
}

void RevArr(int *arr, int size, int i)
{
    if (size - 1 <= i)
    {
        return;
    }
    int temp = arr[size - 1];
    arr[size - 1] = arr[i];
    arr[i] = temp;
    RevArr(arr, size - 1, i + 1);
}

void RevArr_1(int *arr, int size, int i)
{
    if ((size) / 2 <= i)
    {
        return;
    }
    int temp = arr[size - i - 1];
    arr[size - i - 1] = arr[i];
    arr[i] = temp;
    RevArr(arr, size - 1, i + 1);
}

void RevArr_2(int *arr, int size, int start, int end) // Two-Variable Solution
{
    if (start >= end)
    {
        return;
    }
    int temp = arr[end];
    arr[end] = arr[start];
    arr[start] = temp;
    RevArr_2(arr, size, start + 1, end - 1);
}