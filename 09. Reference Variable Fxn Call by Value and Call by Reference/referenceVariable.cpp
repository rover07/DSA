#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int &k = a;
    int &c = k;
    // cout << a;
    cout << k;
    cout << c;
    return 0;
}