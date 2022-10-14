#include <iostream>
#include <math.h>
using namespace std;

void FibSeq(int num);

int main()
{
    FibSeq(3);
    FibSeq(5);
}

void FibSeq(int num) // iterative way
{

    if (num <= 0)
    {
        cout << 0 << endl;
        return;
    }
    if (num == 1)
    {
        cout << 0 << " ";
        cout << 1 << endl;
        return;
    }
    cout << 0 << " ";
    cout << 1 << " ";
    int secondLast = 0; // for (i-2)th term
    int last = 1;       // for (i-1)th term
    int cur;
    for (int i = 2; i <= num; i++)
    {
        cur = last + secondLast;
        secondLast = last;
        last = cur;
        cout << cur << " ";
    }
    cout << "" << endl;
}