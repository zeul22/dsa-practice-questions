#include <iostream>
#include <math.h>
using namespace std;
void printNumbers(int n);
void printNumbersRev(int n);
int main()
{
    printNumbers(10);
    printNumbersRev(10);
    return 0;
}
void printNumbers(int n) // used backtracking
{

    if (n == 0)
    {
        return;
    }

    n--;
    printNumbers(n);
    cout << n + 1 << endl;
}

void printNumbersRev(int n) // used backtracking
{

    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    n = n - 1;
    printNumbersRev(n);
}
