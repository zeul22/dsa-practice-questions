// How to know its a DP Problem:
// 1. Coun the total no of ways.
// 2. Multiple ways to do it but you have to find min or max

// When to apply recursion:
// 1. Count teh total no of ways
// 2. best possible way

// Shortcut to do DP questions:

// Try to represent the problem in terms of index
// DO all possible stuffs on that index according to the problem statement
// Sum of all stuffs if question says "Count all ways"
// min of all stuffs if question says "find min"
// max of all stuffs if question says "find max"

// Remeber Always:
// MEMOIZATIONS -> TABULATION -> SPACE OPTIMIZATION

#include <bits/stdc++.h>
using namespace std;

int ClimbStairs(int n) // similar to Fib qeustion
{                      // Simple Solution
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    int left = ClimbStairs(n - 1);
    int right = ClimbStairs(n - 2);
    return left + right;
}

// Memoizations Solution
int Mem_ClimbStairs(int n, vector<int> &arr)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    int left = ClimbStairs(n - 1);
    int right = ClimbStairs(n - 2);
    if (arr[n] != -1)
        return arr[n];
    return arr[n] = left + right;
}

// Tabulation Solution
int Tab_ClimbStairs(int n)
{
    int prev2 = 1;
    int prev = 1;

    for (int i = 2; i <= n; i++)
    {
        int cur_i = prev2 + prev;
        prev2 = prev;
        prev = cur_i;
    }
    return prev;
}

int main()
{
    int n;
    cout << "Enter the stairs length: " << endl;
    cin >> n;
    vector<int> arr(n + 1, -1);
    cout << "Simple Solution: Possible Ways: " << ClimbStairs(n) << endl;
    cout << "Memoization Solution: Possible Ways: " << Mem_ClimbStairs(n, arr) << endl;
    cout << "Tabulation Solution: Possible Ways: " << Tab_ClimbStairs(n) << endl;
}