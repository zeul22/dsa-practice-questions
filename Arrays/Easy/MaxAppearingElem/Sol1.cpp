#include <bits/stdc++.h>
using namespace std;
void MaxAppearElem(int *arr, int size);
int main()
{
    int arr[5] = {1, 2, 2, 3, 2};
    MaxAppearElem(arr, 5);
}

void MaxAppearElem(int *arr, int size)
{
    int count = 0;
    int maxCount = 0;
    int index;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }
    cout << "Max appearing element in array is " << arr[index] << " with " << maxCount << " repetitions " << endl;
}