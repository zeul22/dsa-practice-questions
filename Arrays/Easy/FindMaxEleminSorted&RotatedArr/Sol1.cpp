#include <bits/stdc++.h>
using namespace std;
void FindMax(int *arr, int size);
int main()
{
    int arr[5] = {1, 3, 4, 2, 0};
    FindMax(arr, 5);
}
void FindMax(int *arr, int size)
{
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low) / 2;
    while (low < high)
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << arr[mid] << endl;
            return;
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
        mid = low + (high - low) / 2;
    }
}

// 1,3,4,2,0