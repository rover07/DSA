#include <iostream>
using namespace std;

void idk(int &a)
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