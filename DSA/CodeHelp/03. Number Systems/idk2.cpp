#include <iostream>
#include <cmath>
using namespace std;

void method2(int num)
{
    int binaryNo = 0;
    int i = 0;
    // inko andar isliye nahi dala qki they become 0 after every iteration of loop i.e. their value is reset to 0.

    while (num > 0)
    {
        int bit = (num & 1);
        binaryNo = bit * pow(10, i) + binaryNo;
        num = num >> 1;
        i++;
    }
    cout << binaryNo;
}

int main()
{
    int num;
    cout << "Enter number";
    cin >> num;
    method2(num);
    return 0;
}