#include <bits/stdc++.h>
using namespace std;
int IsArraySorted(int *arr, int size);
int main()
{
    int arr[6] = {4, 5, 1, 2, 7, 0};
    int x = IsArraySorted(arr, 6);
    cout << x << endl;
}

int IsArraySorted(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return 0;
        }
    }
    return 1;
}