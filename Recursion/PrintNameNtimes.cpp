#include <iostream>
#include <math.h>
using namespace std;
void printNameNTimes(string name, int count);
int main()
{
    printNameNTimes("ANAND Corp.", 10);
    return 0;
}
void printNameNTimes(string name, int count)
{
    if (count == 0)
    {
        return;
    }
    count--;
    printNameNTimes(name, count);
    cout << name << endl;
}
