#include <iostream>
using namespace std;

int HCF(int m, int n);
// Try if this can be done with String
int main()
{
    int hcf_x = HCF(17, 13);
    cout << hcf_x << endl;
    return 0;
}

int HCF(int m, int n) // Euclid's algorithm
{
    if (m < n)
    {
        HCF(n, m);
    }
    else if (m % n == 0)
    {
        return n;
    }
    HCF(m, m % n);
}