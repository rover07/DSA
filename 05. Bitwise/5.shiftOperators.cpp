#include <iostream>
using namespace std;
int main()
{
    int a = 8;
    int b = 50;
    // Left shift
    // double hoga value left shift se
    // cout << (a << 1) << endl;
    // cout << (a << 2) << endl;
    // cout << (a << 3) << endl;

    // // Right shift
    // most cases mein here half hoga value
    // cout << (a >> 1) << endl;
    // cout << (a >> 2) << endl;
    // cout << (b >> 1);
    // cout << (b >> 2);

    // Exception case for right shift (mostly in negative numbers)
    int c = -5;
    unsigned int d = -5;
    cout << (c >> 1) << endl; // the compiler handled the -ve bit stuff and maintained -5 as 5
    cout << (d >> 1);         // Returns large number as compiler doesnt interfere due to unsigned datatype used
    return 0;
}