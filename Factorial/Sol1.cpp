#include <bits/stdc++.h>
using namespace std;
int Factorial(int num);
int main()
{
    int x = Factorial(5);
    cout << x << endl;
}
int Factorial(int num)
{

    if (num <= 1)
    {
        return 1;
    }
    return Factorial(num - 1) * num;
}