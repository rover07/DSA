#include <iostream>
#include <string.h>
using namespace std;

int findLength(char ch[], int size)
{
    //     int length = 0;
    //     for (int i = 0; i < size; i++)
    //     {
    //         // pehle check then increment count of length
    //         if (ch[i] == '\0')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             length++;
    //         }
    //     }
    //     return length;

    // doing the same using while loop

    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char ch[100];
    cout << "Enter string";
    // cin >> ch;
    cin.getline(ch, 100);

    int len = findLength(ch, 100);
    cout << "Answer using self-defined function" << len << endl;

    // Using inbuile function
    cout << "Answer using inbuilt function" << strlen(ch);
    return 0;
}
