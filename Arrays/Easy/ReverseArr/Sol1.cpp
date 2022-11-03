#include <bits/stdc++.h>
using namespace std;
void RevArr(int *arr, int size);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    RevArr(arr, 5);
}
void TravArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}
void RevArr(int *arr, int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    TravArr(arr, size);
}