#include <iostream>
using namespace std;
void printAllDigitsOfInteger(int num)
{
    // int ans=0;
    while (num > 0)
    {
        int digit = num % 10;
        cout << digit << endl;
        num = num / 10;
    }
}
int main()
{
    int num;
    cout << "Enter number";
    cin >> num;
    printAllDigitsOfInteger(num);
    return 0;
}
