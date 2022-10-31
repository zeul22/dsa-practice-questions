#include <bits/stdc++.h>
using namespace std;
void RemoveDuplicates(int *arr, int size);
int main()
{
    int arr[6] = {1, 1, 1, 2, 7, 0};
    RemoveDuplicates(arr, 6);
}
void RemoveDuplicates(int *arr, int size)
{
    int j = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    cout << j + 1 << endl;
}