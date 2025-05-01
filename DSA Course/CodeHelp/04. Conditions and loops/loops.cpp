#include <iostream>
using namespace std;
int main()
{
    // infinite loop
    //  int i = 3;
    //  for (;;)
    //  {
    //      if (i > 0)
    //      {

    //         cout << i << endl;
    //     }
    //     i--;
    // }
    // return 0;

    // // 19's table
    // int tableOf = 19;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << tableOf * i << endl;
    // }

    // 1 to 100 even number print

    // for (int num = 0; num <= 100; num = num + 2)
    // {
    //     cout << num << endl;
    // }

    // another way
    for (int num = 0; num <= 100; num++)
    {
        if (num % 2 == 0)
        {
            cout << num << endl;
        }
    }
}
