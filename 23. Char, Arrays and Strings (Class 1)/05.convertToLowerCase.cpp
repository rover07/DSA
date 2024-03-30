#include <iostream>
using namespace std;

void upperToLowerCase(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] >= 'A' && ch[index] <= 'Z')
        {
            ch[index] = ch[index] - 'A' + 'a';
        }
        index++;
    }
}
int main()
{

    char ch[100];
    cin.getline(ch, 100);
    upperToLowerCase(ch, 100);
    cout << ch;
    return 0;
}