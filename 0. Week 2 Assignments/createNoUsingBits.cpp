#include <iostream>
using namespace std;
void createNoUsingBits(int numberOfDigits)
{
    int input;
    int num = 0;
    // while (numberOfDigits > 0)
    for (int i = 0; i < numberOfDigits; i++)
    {
        int digit;
        cout << "Enter digit: ";
        cin >> digit;
        num = num * 10 + digit;
        // numberOfDigits--;
    }

    cout << num;
}
int main()
{
    int numberOfDigits;
    cout << "Enter number of inputs:";
    cin >> numberOfDigits;
    createNoUsingBits(numberOfDigits);

    return 0;
}