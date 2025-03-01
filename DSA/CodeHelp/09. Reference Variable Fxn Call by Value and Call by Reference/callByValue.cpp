#include <iostream>
using namespace std;

void passByValue(int a)
{
    a = a + 99;
    cout << a << endl;
}

int main()
{
    int a = 9;
    cout << "OG VALUE IS:" << a << endl;
    passByValue(a);
    cout << "Still the OG value is unaffected:" << a;
    return 0;
}