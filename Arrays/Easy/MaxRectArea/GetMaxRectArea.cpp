#include <iostream>
using namespace std;
int getMaxRectArea(int *arr, int size);

int main()
{
    int ht[6] = {2, 1, 5, 6, 2, 3};
    int b = getMaxRectArea(ht, 6);
    cout << b << endl;
}

// Brute forcing
// can use AND operator
// max element and max no of repetitions
// Find more efficient ways to do it

int getMaxRectArea(int *arr, int size)
{
    int maxArea = -1;
    int minHeight = 0;
    int currArea;

    for (int i = 1; i < size; i++)
    {
        minHeight = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {

            if (minHeight > arr[j])
            {
                minHeight = arr[j];
            }

            currArea = (i - j + 1) * minHeight; // Important thing to remmeber

            if (currArea > maxArea)
            {
                maxArea = currArea;
            }
        }
    }
    return maxArea;
}