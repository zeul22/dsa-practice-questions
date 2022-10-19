#include <iostream>
#include <math.h>
using namespace std;
int StringPalindrome(string word);

int main()
{
    StringPalindrome("ABCDCBA");
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