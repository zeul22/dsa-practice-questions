#include <iostream>
#include <math.h>
using namespace std;
int StringPalindrome(string word);

void StringPalin(string arr, int size, int start, int end) // Two-Variable Solution
{
    if (arr[start] != arr[end])
    {
        cout << "Not Palindrome!" << endl;
        return;
    }
    if (start >= end)
    {
        cout << "Palindrome!" << endl;
        return;
    }
    StringPalin(arr, size, start + 1, end - 1);
}
void strPalindrome(string &x, int i)
{
    if (x[x.size() - i - 1] != x[i])
    {
        cout << "Not Palindrome!" << endl;
        return;
    }
    if (i >= x.size() / 2)
    {
        cout << "Palindrome!" << endl;
        return;
    }
    strPalindrome(x, i + 1);
}

int main()
{
    StringPalindrome("ABCDCBA");
    StringPalin("ABCDCBA", 7, 0, 6);
}

int StringPalindrome(string word)
{
    int halfLength = 0;
    if (word.size() % 2 == 0)
        halfLength = word.size() / 2;
    else
        halfLength = (word.size() + 1) / 2;
    for (int i = 0; i < halfLength; i++)
    {
        if (word[i] != word[word.size() - 1 - i])
        {
            cout << "Not Palindrome" << endl;
            return 0;
        }
    }
    cout << "Palindrome" << endl;
    return 1;
}
