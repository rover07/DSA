#include <iostream>
using namespace std;

//
//
// Approach 1: Modulus
//
//
// int countSetBit(int num)
// {
//     int count = 0;
//     while (num > 0)
//     {
//         if (num % 2 == 1)
//         {
//             count++;
//         }
//         num = num / 2;
//     }

//     return count;
// }
// int main()
// {
//     int num;
//     cout << "Enter number:";
//     cin >> num;
//     int ans = countSetBit(num);

//     cout << "Number of set bits=" << ans;
//     return 0;
// }
//
//
// approach 2: Bitwise method-> better]
//
int countSetBit(int num)
{

    int count = 0;
    while (num > 0)
    {
        int bit = 0;
        bit = num & 1;
        // ans =*pow(2,i++)+ans
        if (bit == 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;
    int Answer = countSetBit(num);

    cout << "Number of set bits=" << Answer;
    return 0;
}
