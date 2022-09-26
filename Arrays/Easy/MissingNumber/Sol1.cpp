#include <bits/stdc++.h>
using namespace std;
void MissingNumber(int *arr, int size);
int main()
{
    int arr[6] = {0, 1, 2, 3, 5, 6};
    MissingNumber(arr, 6);
}

void MissingNumber(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i)
        {
            cout << "Missing Number: " << i << endl;
            return;
        }
    }
}