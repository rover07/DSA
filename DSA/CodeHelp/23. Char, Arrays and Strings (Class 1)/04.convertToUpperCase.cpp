#include <iostream>
#include <string.h>
using namespace std;

void upperCase(char ch[], int size)
{
    // for (int i = 0; i < size; i++)
    // {
    //     if (ch[i] != '\0')
    //     {
    //         char currentChar = ch[i];
    //         if (currentChar >= 'a' && currentChar <= 'z')
    //         {
    //             ch[i] = currentChar - 'a' + 'A';
    //         }
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // cout << ch;

    // // // using While loop
    int i = 0;
    while (ch[i] != '\0')
    {
        char currentChar = ch[i]; // we could use ch[i] directly without using currentChar to store it too.

        // checking if lowercase, then only convert to upper case
        if (currentChar >= 'a' && currentChar <= 'z')
        {
            ch[i] = currentChar - 'a' + 'A';
        }
        i++;
    }
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    upperCase(ch, 100);
    cout << ch;
    return 0;
}