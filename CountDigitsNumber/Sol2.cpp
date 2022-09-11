#include <iostream>

using namespace std;
// doubt
int countDigits(int num);

int main()
{
    countDigits(10);
    countDigits(-1);
    countDigits(03);
    return 0;
}

int countDigits(int num)
{
    string temp = to_string(num); // any idea why this shows red line?
    if (num < 0)
    {
        cout << temp.length() - 1 << endl;
        return temp.length() - 1;
    }
    cout << temp.length() << endl;
    return temp.length();
}