#include <bits/stdc++.h>
using namespace std;
int SumN(int n);
int main()
{
    int sum = SumN(10);
    cout << sum << endl;
}
int SumN(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n + SumN(n - 1);
}