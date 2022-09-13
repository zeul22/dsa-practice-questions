#include <bits/stdc++.h>
using namespace std;
void PrintBase10Int(unsigned number);
int main()
{
    PrintBase10Int(5);
}

void PrintBase10Int(unsigned number)
{
    char digit = number % 10 + '0';
    if (number /= 10)
    {
        cout << number << " ";
    }
    cout << digit << endl;
}