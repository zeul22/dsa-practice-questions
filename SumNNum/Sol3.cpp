#include <bits/stdc++.h>
using namespace std;
void sumN(int n);
int main()
{
    sumN(10);
}
void sumN(int n)
{
    int sum = n * (n + 1) / 2;
    cout << sum << endl;
}