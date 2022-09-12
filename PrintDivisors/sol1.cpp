#include <iostream>
using namespace std;
void PrintDivisors(int num);
int main()
{
    PrintDivisors(36);
    return 0;
}

void PrintDivisors(int num) // Bruteforce
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << "" << endl;
}
