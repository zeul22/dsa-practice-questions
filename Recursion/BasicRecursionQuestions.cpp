#include <bits/stdc++.h>
using namespace std;

void PrintName(string x, int count)
{
    if (count <= 0)
    {
        return;
    }
    cout << x << endl;
    PrintName(x, count - 1);
}
void PrintLinearNum(int n)
{
    if (n <= 0)
    {
        return;
    }
    PrintLinearNum(n - 1);
    cout << n << endl;
}

void PrintLinearNumRev(int n)
{
    if (n <= 0)
    {
        return;
    }
    cout << n << endl;
    PrintLinearNumRev(n - 1);
}

int main()
{
    PrintName("Rahul", 5);
    PrintLinearNum(10);
    PrintLinearNumRev(10);
    return 0;
}