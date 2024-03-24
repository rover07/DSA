#include <iostream>
using namespace std;
void insertCharArr(char &ch[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Insert value at index" << i;
        cin << ch[i] << endl;
    }
}

void printCharArr(char &ch[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Character at" << i << "th Index is:" << ch[i] << endl;
    }
}

int main()
{

    int size;
    cout << "Enter size of char array:";
    cin >> size;
    char *ch = new char[size];
    //  int size = sizeof(ch) / sizeof(char);
    // int size = sizeof(ch) / sizeof(int);
    insertCharArr(ch, size);
    printCharArr(ch, size);

    return 0;
}