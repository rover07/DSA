#include <iostream>
#include <vector>
using namespace std;

int sqrt(int target)
{
    int size = target - 1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid > target)
        {
            end = mid - 1;
        }
        if (mid * mid < target)
        {
            ans = mid;
            start = mid + 1;
        }
        if (mid * mid == target)
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int target = 10;
    int ans = sqrt(target);
    if (ans == -1)
    {
        cout << "No square root found!";
    }
    else
        cout << "Sqrt of " << target << "is: " << ans;

    // for precision
    int precision;
    cout << "Enter number to be checked for precision";
    cin >> precision; // how much number we want after decimal
    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j * j <= target; j += step)
        {
            finalAns = j;
        }
        step /= 10;
    }
    cout << finalAns;
    return 0;
}