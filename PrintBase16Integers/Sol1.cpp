#include <bits/stdc++.h>
using namespace std;
void PrintBase16Int(unsigned number);
int main()
{
    PrintBase16Int(2056);
}

void PrintBase16Int(unsigned number)
{
    int digit = number % 16;
    string conversion = "0123456789ABCDEF";
    if (number /= 16)
    {
        PrintBase16Int(number);
    }
    cout << conversion[digit] << "";
}