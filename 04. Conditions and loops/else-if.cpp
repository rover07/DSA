#include <iostream>
using namespace std;
int main()
{

    // //basic else if
    // int sides;
    // cout << "Enter sides:";
    // cin >> sides;
    // if (sides == 5)
    // {
    //     cout << "Pentagon";
    // }
    // else if (sides == 3)
    // {
    //     cout << "Triangle";
    // }
    // else if (sides == 4)
    // {
    //     cout << "Square/Rectangle";
    // }
    // else
    // {
    //     cout << "Not a shape";
    // }
    // return 0;

    int number;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << 'The number is even';
    }
    else
    {
        cout << "The number is odd";
    }
}
