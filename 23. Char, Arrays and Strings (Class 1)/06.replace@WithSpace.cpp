#include <iostream>
using namespace std;

void replaceAtTheRateWithSpace(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
}
int main()
{

    char ch[100];
    cin.getline(ch, 100);
    replaceAtTheRateWithSpace(ch, 100);
    cout << ch;
    return 0;
}