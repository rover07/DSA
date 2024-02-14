#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age:";
    cin >> age;
    if (age >= 18)
    {
        cout << "Licence granted!";
    }
    else
    {

        cout << "Licence Aborted!";
    }

    return 0;
}