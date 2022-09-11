#include <iostream>
using namespace std;

int countDigits(int num);

int main()
{
    countDigits(15);
    countDigits(1);
    countDigits(-1);
    countDigits(8394);
    countDigits(12345);
    countDigits(012);

    return 0;
}

int countDigits(int num)
{
    int n = num;
    int SumDigits = 0;
    if (n == 0)
        return 1;
    while (n != 0)
    {
        SumDigits++;
        n = n / 10;
    }
    cout << SumDigits << endl;
    return SumDigits;
}