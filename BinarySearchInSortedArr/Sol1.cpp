#include <bits/stdc++.h>
using namespace std;
void BinarySearch(int *arr, int size, int element);
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    BinarySearch(arr, 6, 3);
}
void BinarySearch(int *arr, int size, int element)
{
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (arr[mid] == element)
        {
            cout << "Element Found at index " << mid << endl;
            return;
        }

        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;

        mid = low + (high - low) / 2;
    }
    cout << "Element Not Found!" << endl;
}