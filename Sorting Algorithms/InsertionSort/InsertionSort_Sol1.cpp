#include <iostream>
using namespace std;
void InsertionsSort(int *arr, int size);
int main()
{
    int arr[6] = {4, 5, 1, 2, 7, 0};
    InsertionsSort(arr, 6);
    return 0;
}

void InsertionsSort(int *arr, int size) // Practice
{
    int key, j;
    // Loop for passes
    for (int i = 1; i <= size - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        // Loop for each pass
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}