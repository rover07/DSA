#include <iostream>
using namespace std;

void sum(int n)
{
    // int ans = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         ans += i;
    //     }
    // }
    // cout << ans;

    // OR

    int ans = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        ans += i;
    }
    cout << ans;
}

int main()
{
    int n;
    cout << "Enter value";
    cin >> n;
    sum(n);
    return 0;
}