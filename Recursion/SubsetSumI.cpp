#include <bits/stdc++.h>
using namespace std;
// Ways:
// 1. Power Set (Brute Force):Time: O(2^n*N)
// 2. Recursive Solution (optimized)  Time: O(2^nlog(2^n))

void func(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubset)
{
    if (ind == N)
    {
        sumSubset.push_back(sum);
        return;
    }

    // pick the element
    func(ind + 1, sum + arr[ind], arr, N, sumSubset);

    // Do-not pick the element
    func(ind + 1, sum, arr, N, sumSubset);
}

vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> sumSubset;
    func(0, 0, arr, N, sumSubset);
    sort(sumSubset.begin(), sumSubset.end());
    return sumSubset;
}

int main()
{
    vector<int> arr = {3, 1, 2, 5};
    vector<int> x;
    x = subsetSums(arr, 4);
    for (auto it : x)
    {
        cout << it << " ";
    }

    return 0;
}