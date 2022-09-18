#include <bits/stdc++.h>
using namespace std;
void MaximaInArr(int *arr, int size);
int main()
{
    int arr[5] = {1, 5, 3, 4, 0};
    MaximaInArr(arr, 5);
}

void MaximaInArr(int *arr, int size)
{
    int maxima;
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            cout << arr[i] << " ";
        }
    }
    cout << "" << endl;
}