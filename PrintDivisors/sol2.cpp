#include <iostream>
#include <math.h>
using namespace std;
void PrintDivisors(int num);
int main()
{
    PrintDivisors(36);
    return 0;
}

void PrintDivisors(int num)
{
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            if (i != num / i)
                cout << num / i << " ";
        }
    }
    cout << "" << endl;
}