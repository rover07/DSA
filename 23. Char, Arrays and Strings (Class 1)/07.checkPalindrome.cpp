#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

bool checkPalindrome(char ch[], int length)
{
    int l = 0;
    int r = length - 1;
    ;

    while (l <= r)
    {
        if (ch[l] == ch[r])
        {
            l++;
            r--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{

    char ch[100];
    cin.getline(ch, 100);
    int ans = checkPalindrome(ch, strlen(ch));
    if (ans)
    {
        cout << "Palindrome!";
    }
    else
        cout << "Not a palindrome!";
    return 0;
}