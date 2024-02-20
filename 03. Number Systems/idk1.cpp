#include <iostream>
using namespace std;
#include <cmath>
void decimalToBinary(int num)
{
    int binaryNo = 0;
    int i = 0;
    while (num > 0)
    {
        int bit = num % 2;
        binaryNo = bit * pow(10, i) + binaryNo;
        i++;
        num = num / 2;
    }
    cout << binaryNo;
}

int main()
{
    int num;
    cin >> num;
    decimalToBinary(num);
    return 0;
}