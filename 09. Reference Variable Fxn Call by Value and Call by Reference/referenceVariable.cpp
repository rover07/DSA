#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int &k = a;
    int &c = k;

    // a++;
    // k++;
    c++;
    cout << a << endl;
    cout << k << endl;
    cout << c;
    return 0;
}