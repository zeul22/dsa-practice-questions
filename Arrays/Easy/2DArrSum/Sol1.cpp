#include <bits/stdc++.h>
using namespace std;

#define Max_Size 10

void ArrSum2D(int arr[Max_Size][Max_Size], int Col, int row);
int main()
{
    int arr[][Max_Size] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    ArrSum2D(arr, 5, 5);
}

void ArrSum2D(int arr[Max_Size][Max_Size], int Col, int row)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    cout << "Sum of the 2D Array: " << sum << endl;
}