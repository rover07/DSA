#include <iostream>
#include <cmath>
using namespace std;
// void find(int num)
// {
//     int remainder = num % 2;
//     int divisor = remainder / 2;
//     cout << remainder << "  " << divisor;
// };

// int main()
// {
//     int num;
//     cout << "Enter number to find remainder and divisor";
//     cin >> num;
//     find(num);
//     return 0;
// }

// int decimalToBinaryMethod1(int n)
// {
//     while (n > 0)
//     {
//         int bit = n % 2;
//         cout << bit << "   ";
//         n = n / 2;
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout << "Enter Number:";
//     cin >> n;
//     int binary = decimalToBinaryMethod1(n);
// }

// void decimalToBinaryMethod1(int n)
// {
//     int binaryno = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         int bit = n % 2; // remainder method
//         binaryno = bit * pow(10, i) + binaryno;
//         // added to reverse bits
//         i++;
//         n = n / 2; //remainder method
//     }
//     // return binaryno;
//     cout << binaryno;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     decimalToBinaryMethod1(n);

//     // int answer = decimalToBinaryMethod1(n); // now we have to reverse answer to get proper form
//     // cout << answer;
// }
