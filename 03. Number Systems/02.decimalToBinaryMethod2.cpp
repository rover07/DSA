
// 02. BITWISE METHOD, better than division method

#include <iostream>

using namespace std;
#include <cmath>

int decimalToBinaryMethod2(int number)
{
    int binaryno = 0;
    int i = 0;
    while (number > 0)
    {
        int bit = (number & 1);                 // pehle ulta kia here
        binaryno = bit * pow(10, i) + binaryno; // then again ulta kia
        i++;
        number = number >> 1;
    }

    return binaryno;
}

int main()
{
    int number;
    cout << "Enter number to be converted:";
    cin >> number;
    int answer = decimalToBinaryMethod2(number);
    cout << answer;
    return 0;
}
