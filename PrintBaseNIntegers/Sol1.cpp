#include <bits/stdc++.h>
using namespace std;
void PrintBaseNInt(unsigned number, unsigned base);
int main()
{
    PrintBaseNInt(2056, 16);
}

void PrintBaseNInt(unsigned number, unsigned base)
{
    int digit = number % base;
    string conversion = "0123456789ABCDEF";
    if (number /= base)
    {
        PrintBaseNInt(number, base);
    }
    cout << conversion[digit] << "";
}