#include <bits/stdc++.h>
using namespace std;

int main()
{
}
char *IntToStr(char *p, unsigned number)
{
    char digit = number % 10 + '0';
    if (number /= 10)
    {
        p = IntToStr(p, number);
    }
    *p++ = digit;
    return p;
}