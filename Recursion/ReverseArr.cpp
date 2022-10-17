#include <iostream>
#include <math.h>
using namespace std;
void RevArr(int *arr, int size);

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr1[5] = {4, 8, 12, 16, 20};
    RevArr(arr, 6);
    cout << "" << endl;
    RevArr(arr1, 5);
    cout << "" << endl;
    return 0;
}
void RevArr(int *arr, int size)
{
    cout << arr[--size] << endl;
    if (size == 0)
    {
        return;
    }

    RevArr(arr, size);
}