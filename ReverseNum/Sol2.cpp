#include <iostream>
#include <vector>
using namespace std;

void RevNum(int n);
// Try if this can be done with String
int main()
{
    RevNum(21);
    return 0;
}

void RevNum(int n)
{
    string temp = to_string(n);
    string temp1;
    vector<char> v;
    char tempPlace;
    int i = 0;
    int j = temp.length();
    for (int i = j; i <= 0; i--)
    {
        temp1.append(i);
    }

    cout << temp << endl;
}