#include <iostream>
#include <cmath>
using namespace std;

void binToDecimal(int binaryNo)
{
    int decimal = 0;
    int i = 0; // power
    while (binaryNo)
    {
        int bit = (binaryNo & 1);
        decimal = bit * pow(2, i) + decimal;
        i++;
        binaryNo = binaryNo / 10;
    }

    cout << decimal;
}

int main()
{
    int binaryNo;
    cout << "Enter binary number to be converted";
    cin >> binaryNo;
    binToDecimal(binaryNo);
    return 0;
}