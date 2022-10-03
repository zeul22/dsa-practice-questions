// #include <bits/stdc++.h>
// using namespace std;
// void SelectionSort(int *arr, int size);
// void selection_sort(int *arr, int size);
// void swap(int x, int y);
// void TravArray(int *arr, int size);

// int main()
// {
//     int arr[5] = {4, 1, 3, 5, 2};
//     SelectionSort(arr, 5);
//     selection_sort(arr, 5);
// }

// void SelectionSort(int *arr, int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int tempmin = i; // 4
//         cout << "Picking the min " << tempmin << endl;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] < arr[tempmin])
//             {
//                 tempmin = j; // 1
//                 cout << "Minimum Chosen " << tempmin << endl;
//             }
//         }

//         int temp = arr[i]; // 4
//         // cout << temp << endl;
//         arr[tempmin] = arr[i]; // 1
//         arr[i] = temp;         // 4
//     }

//     cout << "After selection sort: "
//          << "\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     TravArray(arr, size);
// }
#include <bits/stdc++.h>
using namespace std;

void SelSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int tempmin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[tempmin])
            {
                tempmin = j;
            }
        }
        int temp = arr[tempmin];
        arr[tempmin] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}

void selection_sort(int arr[], int n)
{
    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout << "After selection sort: "
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[] = {4, 1, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // selection_sort(arr, n);
    SelSort(arr, n);
    return 0;
}