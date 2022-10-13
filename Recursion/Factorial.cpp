#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n);

int main()
{
    int sum = factorial(5);
    cout << sum << endl;
    return 0;
}
int factorial(int n)
{

    if (n <= 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}