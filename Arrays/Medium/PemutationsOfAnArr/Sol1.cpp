#include <bits/stdc++.h>
using namespace std;
void swap(int *arr, int x, int y);
void TravArr(int *arr, int size);
void Permutations(int *arr, int size);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Permutations(arr, 5);
}

void swap(int *arr, int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
void TravArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}

void PermutArr(int *arr, int i, int size) // gives all the permutations of the array
{
    if (size == i)
    {
        TravArr(arr, size);
        return;
    }
    int j = i;
    for (; j < size; j++)
    {
        swap(arr, i, j);
        PermutArr(arr, i + 1, size);
        swap(arr, i, j);
    }
}

void Permutations(int *arr, int size)
{
    PermutArr(arr, 0, size);
}
