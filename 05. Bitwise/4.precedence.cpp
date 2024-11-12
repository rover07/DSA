#include <iostream>
using namespace std;
int main()
{
    cout << (2 * 3 + 5 / 10 - 2) << endl;
    // giving priority to desired numbers using operator precedence
    cout << ((2 * 3) + (5 / 10) - 2) << endl; // we'll mostly use brackets and not refer precedence table

    return 0;
}