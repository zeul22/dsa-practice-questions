#include <bits/stdc++.h>
using namespace std;
void countingFreq(int *arr, int size, int element);
void countingFreqEachElem(int *arr, int size);
void countFreq(int arr[], int n);
int main()
{
    int arr[7] = {1, 2, 2, 3, 5, 2, 1};
    countingFreq(arr, 7, 2);
    countFreq(arr, 7);
    return 0;
}

void countingFreq(int *arr, int size, int element)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    cout << "Element " << element << " occurs " << count << " times in the array" << endl;
}

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false); // used STL here

    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

void countingFreqEachElem(int *arr, int size)
{
    int count = 0;
    int *visitedArr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        visitedArr[i] = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && visitedArr[j] == 0)
            {
                count++;
                visitedArr[j] == 1;
            }
        }

        visitedArr[i] = 1;
    }
}
// Solution 1: Use of two loops

// Intuition: We can simply use two loops, in which the first loop points to one element and
// the second loop finds that element in the remaining array. We will keep track of the occurrence of that same element by maintaining a count variable.
// We also have to maintain a visited array so that it will keep track of the duplicate elements that we already count.

// Approach:

// Make a visited array of type boolean.
// Use the first loop to point to an element of the array.
// Initialize the variable count to 1.
// Make that index true in the visited array.
// Run second loop, if we find the element then mark the visited index true and increase the count.
// If the visited index is already true then skip the other steps.