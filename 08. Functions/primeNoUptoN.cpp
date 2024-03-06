#include <iostream>
using namespace std;
// void prime(int start)
// {
//     for (int i = 2; i < start; i++)
//     {
//         if (start % i != 0)
//         {
//             cout << start << endl;
//         }
//         else
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     int end;
//     cin >> end;
//     for (int start = 1; start <= end; start++)
//     {
//         prime(start);
//     }
//     return 0;
// }

bool checkPrime(int num)
{
    int i = 2;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int num;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        bool ans = checkPrime(i);
        if (ans)
        {
            cout << i << " ";
        }
    }
    return 0;
}