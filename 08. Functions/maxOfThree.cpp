#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c)
{
    // problem if there are same numbers
    //  if (a > b && a > c)
    //  {
    //      cout << "A is greatest";
    //  }
    //  else if (b > a && b > c)
    //  {
    //      cout << "B is greatest";
    //  }
    //  else
    //  {
    //      cout << "C is greatest";
    //  }

    // Better way
    // int ans = max(c,max(a, b));
    // or
    int ans = max(a, b);
    int finalAns = max(ans, c);
    cout << "Final answer is:" << finalAns;
    return 0;
}

int main()
{
    maxOfThree(9, 1, 9);

    return 0;
}
