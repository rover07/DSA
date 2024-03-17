#include <iostream>
using namespace std;

int divideTwoNumbers(int divisor, int dividend)
{
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        // if (divisor == 1)
        // {
        //     return dividend;
        // }
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
        }
        if (abs(mid * divisor) <= abs(dividend))
        {
            ans = mid;
            start = mid + 1;
        }
        if (abs(mid * divisor) > abs(dividend))
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if (divisor > 0 && dividend > 0 || divisor < 0 && dividend < 0)
        return ans;
    else
        return -ans;
}

int main()
{

    int divisor, dividend;
    cout << "Enter Dividend";
    cin >> dividend;
    cout << "Enter Divisor";
    cin >> divisor;
    int ans = divideTwoNumbers(divisor, dividend);

    cout << "Quotient is:" << ans;

    // For precise answer
    int precision;
    cout << "Enters digits after decimal";
    cin >> precision;

    double step = 0.1;
    double preciseAns = (double)ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j <= ((double)dividend / (double)divisor); j += step)
        {
            preciseAns = j;
        }
        step /= 10;
    }
    cout << "Precise answer is:" << preciseAns;
    return 0;
}
