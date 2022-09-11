#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;

int countDigits(int num);

int main()
{
    countDigits(012);
    return 0;
}

int countDigits(int num)
{
    int digits = floor(log10(num) + 1);
    cout << digits << endl;
    return digits;
}