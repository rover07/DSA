#include <iostream>
using namespace std;
//

// Normal way
//
//  bool oddEven(int num)
//  {
//      if (num % 2 == 0)
//      {
//          return true;
//      }
//      else
//      {
//          return false;
//      }
//  }

//
//
// Using Bitwise coz its fast being low level
//
//

bool oddEven(int num)
{
    if ((num & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//
int main()
{
    float num;
    cin >> num;
    int ans = oddEven(num);
    if (ans)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    return 0;
}
