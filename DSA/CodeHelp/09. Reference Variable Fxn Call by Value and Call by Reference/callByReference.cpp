#include <iostream>
using namespace std;

void idk(int &a) // pass by reference
// void idk(int a) // pass by value
{
    a = a + 2;
    cout << a << endl;
}
int main()
{
    int i;
    cin >> i;
    cout << "OG values:" << i << endl;
    idk(i);
    cout << i;
    return 0;
}