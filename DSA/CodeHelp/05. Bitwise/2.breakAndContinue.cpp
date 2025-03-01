#include <iostream>
using namespace std;
int main()
{

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << i << endl;

    //     if (i == 3)
    //     {
    //         break;
    //     }
    // }

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;

        if (i == 3)
        {
            continue;
        }
        cout << "hi";
    }
    return 0;
}