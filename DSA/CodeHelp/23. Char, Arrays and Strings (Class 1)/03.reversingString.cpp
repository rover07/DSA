#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
void reversal(char ch[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        swap(ch[left], ch[right]);
        left++;
        right--;
    }
    cout << "Reversed char array:" << ch;
}

int main()
{
    char ch[100];
    cin >> ch;
    int len = strlen(ch);
    // reversing using self defined function
    // reversal(ch, len);

    // reversing using inbuilt function.
    reverse(ch, ch + strlen(ch));
    cout << "Reversing using inbuilt function " << ch;
    return 0;
}