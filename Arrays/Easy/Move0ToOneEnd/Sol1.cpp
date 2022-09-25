#include <bits/stdc++.h>
using namespace std;
void MoveZeroesToOneEnd(int *arr, int size);
int main()
{
    int arr[6] = {0, 1, 0, 1, 0, 0};
    MoveZeroesToOneEnd(arr, 6);
}
void MoveZeroesToOneEnd(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            cout << arr[i - 1] << "   " << arr[i] << endl;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}