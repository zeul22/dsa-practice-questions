#include <bits/stdc++.h>
using namespace std;
void RotateArray(int *arr, int size, int key);
int main()
{
    int arr[6] = {0, 1, 2, 3, 4, 5};
    RotateArray(arr, 6, 4);
}

void Rotate(int *arr, int size, int start, int end)
{
    int i = start;
    int j = end;
    int temp;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void RotateArray(int *arr, int size, int key)
{
    Rotate(arr, size, 0, key);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;

    Rotate(arr, size, key + 1, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;

    Rotate(arr, size, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}
