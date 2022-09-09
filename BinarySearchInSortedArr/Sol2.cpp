#include <bits/stdc++.h>
using namespace std;
void BSearch_Recursive(int *arr, int size, int low, int high, int element);
void BSearch(int *arr, int size, int element);
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    BSearch(arr, 6, 3);
}

void BSearch(int *arr, int size, int element)
{
    BSearch_Recursive(arr, size, 0, size - 1, element);
}

void BSearch_Recursive(int *arr, int size, int low, int high, int element)
{
    if (low > high)
        return;
    int mid = low + (high - low) / 2;
    if (arr[mid] == element)
        cout << "Element found at index " << mid << endl;
    else if (arr[mid] < element)
    {
        BSearch_Recursive(arr, size, mid + 1, high, element);
    }
    else
    {
        BSearch_Recursive(arr, size, low, mid - 1, element);
    }
}
