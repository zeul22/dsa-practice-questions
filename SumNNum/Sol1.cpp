#include <bits/stdc++.h>
using namespace std;
void sumN(int n);
int main()
{
    sumN(10);
}
void sumN(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum << endl;
}