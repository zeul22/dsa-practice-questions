#include <iostream>
using namespace std;

int ArmstrongNum(int num);
int powerofNum(int x, int y);

int main()
{
    ArmstrongNum(153);
    ArmstrongNum(173);
}

int powerofNum(int x, int y)
{
    int res = 1;
    for (int i = 0; i < y; i++)
    {
        res = res * x;
    }
    return res;
}
int ArmstrongNum(int num)
{
    int numTemp = num;
    int sum = 0;
    int temp;
    while (num != 0)
    {
        temp = num % 10;
        sum = sum + powerofNum(temp, 3);
        num = num / 10;
    }
    if (numTemp == sum)
    {
        cout << "It is an Armstrong Number!" << endl;
        return 1;
    }
    cout << "It is not an Armstrong Number!" << endl;
    return 0;
}