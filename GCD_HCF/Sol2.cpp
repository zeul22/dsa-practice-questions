#include <iostream>
using namespace std;

int HCF(int m, int n);
// Try if this can be done with String
int main()
{
    int hcf_x = HCF(9, 12);
    return 0;
}

int HCF(int m, int n) // Bruteforce
{
    int hcf;
    int iter;
    int numer;
    int res = 0;
    if (m > n)
    {
        iter = n;
        numer = m;
    }
    else
    {
        iter = m;
        numer = n;
    }

    for (int i = 1; i < iter; i++)
    {
        if (numer % i == 0)
            res = i;
    }
    cout << res << endl;
    return res;
}