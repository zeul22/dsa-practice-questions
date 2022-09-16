#include <bits/stdc++.h>
using namespace std;
void AlternateElem(int *arr, int size);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    AlternateElem(arr, 5);
}

void AlternateElem(int *arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        cout << arr[i] << endl;
    }
    cout << "" << endl;
}