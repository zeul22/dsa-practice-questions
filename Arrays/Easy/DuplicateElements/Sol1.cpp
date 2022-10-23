#include <bits/stdc++.h>
using namespace std;
void duplicates(int *arr, int size);
int main()
{
    int arr[5] = {3, 2, 3, 4, 2};
    duplicates(arr, 5);
}
void duplicates(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
    cout << "" << endl;
}