// 03. Number System
#include <iostream>
#include <cmath>
using namespace std;

// void findRemainderAndDivi(int n)
// {
//     int remainder = n % 2;
//     int divisor = remainder / 2;
//     cout << remainder << divisor;
// }

// void decToBinMethod1(int n)
// {
//     int binaryNo;
//     int i=0;
//     while (n > 0)
//     {
//         int bit=n %2;
//         // lets reverse it
//         binaryNo=bit*pow(10,i)+binaryNo;
//         i++;
//         n=n/2;
//     }
//     cout<<"Binary number:"<< binaryNo;
// }

void decToBinaryMethod2(int n)
{
    int i = 0;
    int binaryNo = 0;
    while (n > 0)
    {
        int bit = n & 1;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    cout << binaryNo;
}

// void binToDecMethod1(int n)
// {
// cout << "binary to decimal method 1";

//     int i = 0;
//     int decimal = 0;
//     while (n > 0)
//     {
//         int bit = n % 10;
//         decimal = bit * pow(2, i++) + decimal;
//         n /= 10;
//     }
//     cout << decimal;
// }

void binToDecMethod2(int n)
{
    cout << "binary to decimal method 2:    ";
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        decimal = bit * pow(2, i++) + decimal;
        // n = n >> 1;
        n = n / 10;
    }
    cout << decimal;
}
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    // findRemainderAndDivi(n);
    // decToBinMethod1(n);
    // decToBinaryMethod2(n);
    // binToDecMethod1(n);
    binToDecMethod2(n);

    return 0;
}
