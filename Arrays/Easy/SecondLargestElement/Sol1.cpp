#include <bits/stdc++.h>
using namespace std;
int LargestElement(int *arr, int size);
int main()
{
    int arr[6] = {4, 5, 1, 2, 7, 0};
    int x = LargestElement(arr, 6);
    cout << x << endl;
}
int LargestElement(int *arr, int size)
{
    int maxtemp;
    int secondmax;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxtemp)
        {
            secondmax = maxtemp;
            maxtemp = arr[i];
        }
    }
    return secondmax;
}