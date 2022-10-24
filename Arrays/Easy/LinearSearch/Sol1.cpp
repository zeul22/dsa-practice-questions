#include <bits/stdc++.h>
using namespace std;
void LinearSearch(int *arr, int size, int element);
int main()
{
    int arr[6] = {1, 1, 1, 2, 7, 0};
    LinearSearch(arr, 6, 0);
}
void LinearSearch(int *arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element " << element << " Found!" << endl;
            return;
        }
    }
    cout << "Element Not Found!" << endl;
}