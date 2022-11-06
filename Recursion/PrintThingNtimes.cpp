#include <iostream>
#include <math.h>
using namespace std;
void printNTimes(int n, int count);
int main()
{
    printNTimes(5, 10);
    return 0;
}
void printNTimes(int n, int count)
{
    if (count == 0)
    {
        return;
    }
    count--;
    printNTimes(n, count);
    cout << n << " ";
}
