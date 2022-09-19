#include <bits/stdc++.h>
using namespace std;
void DigitsSum(int num);
int main()
{
    DigitsSum(-101);
    DigitsSum(541);
}

void DigitsSum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + abs(num % 10);
        num = num / 10;
    }

    cout << sum << endl;
}