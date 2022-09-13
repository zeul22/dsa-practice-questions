#include <bits/stdc++.h>
using namespace std;
int Fib(int num);
int main()
{
    int x = Fib(5);
    cout << x << endl;
}
int Fib(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return Fib(num - 1) + Fib(num - 2);
}