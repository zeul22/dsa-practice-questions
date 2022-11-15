#include <bits/stdc++.h>
using namespace std;
// Time Complexity: O(2^n X n) => Can be corrected by using memoization and fragmentation => Dynamic Programming
// Space Complexity: O(n)
void F(int *arr, vector<int> &x, int size, int i) // create the Recursion Tree to get it very easily
{
    if (i >= size)
    {
        for (auto it : x)
        {
            cout << it << " ";
        }

        if (x.size() == 0)
        {
            cout << "{}";
        }
        cout << "" << endl;
        return;
    }
    x.push_back(arr[i]);
    F(arr, x, size, i + 1); // taking the element
    x.pop_back();
    F(arr, x, size, i + 1); // not taking the element
}
int main()
{
    vector<int> x;
    int arr[3] = {1, 2, 3};
    F(arr, x, 3, 0);
    return 0;
}