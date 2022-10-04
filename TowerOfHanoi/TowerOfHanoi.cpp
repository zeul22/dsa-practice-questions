#include <bits/stdc++.h>
using namespace std;
void TowerOfHanoi(int num, char src, char dest, char temp);
int main()
{
    TowerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}
void TowerOfHanoi(int num, char src, char dest, char temp)
{
    if (num <= 1)
    {
        return;
    }
    TowerOfHanoi(num - 1, src, temp, dest);
    cout << "Move " << num << " peg from " << src << " " << dest << endl;
    TowerOfHanoi(num - 1, temp, dest, src);
}