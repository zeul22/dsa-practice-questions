#include <bits/stdc++.h>
using namespace std;
void LargestSumSubArr(int *arr, int size);
int main()
{
    int arr[5] = {1, 2, -1, 5, 4};
    LargestSumSubArr(arr, 5);
}
void LargestSumSubArr(int *arr, int size)
{
    int tempMax = 0;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (tempMax > max)
            {
                max = tempMax;
            }
            else
            {
                tempMax = 0;
            }
            continue;
        }
        tempMax = tempMax + arr[i];
        if (tempMax > max)
        {
            max = tempMax;
        }
    }
    cout << max << endl;
}