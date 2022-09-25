#include <bits/stdc++.h>
using namespace std;
void MoveZeroes(int *arr, int size);
int main()
{
    int arr[6] = {0, 1, 0, 1, 0, 0};
    MoveZeroes(arr, 6);
}

void MoveZeroes(int *arr, int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] != 0 && arr[j] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
            i++;
        }
        if (arr[i] != 0 && arr[j] != 0)
        {
            j--;
        }
        if (arr[i] == 0 && arr[j] != 0)
        {
            i++;
        }
        if (arr[i] == 0 && arr[j] == 0)
        {
            i++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}
