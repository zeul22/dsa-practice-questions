#include <iostream>
using namespace std;

int RevNum(int n);

int main()
{
    RevNum(15);
    RevNum(150);
    RevNum(83);
    RevNum(100);
}

int power(int x, int y)
{
    int res = 1;
    for (int i = 0; i < y; i++)
    {
        res = res * x;
    }
    return res;
}

int RevNum(int n)
{
    int temp = 0;
    int i = 0;

    while (n != 0)
    {
        temp = temp * 10 + (n % 10);
        i++;
        n = n / 10;
    }
    cout << temp << endl;
    return temp;
}