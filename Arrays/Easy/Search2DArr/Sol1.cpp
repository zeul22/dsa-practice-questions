#include <bits/stdc++.h>
using namespace std;
#define Max_Size 10
void Search2DArr(int arr[][Max_Size], int row, int col, int element);
int main()
{
    int arr[Max_Size][Max_Size] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    Search2DArr(arr, 3, 5, 14);
}
void Search2DArr(int arr[][Max_Size], int row, int col, int element)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == element)
            {
                cout << "Element Found at index "
                     << "Row: " << i << " Column: " << j << endl;
                return;
            }
        }
    }
    cout << "Element Not Found!" << endl;
}