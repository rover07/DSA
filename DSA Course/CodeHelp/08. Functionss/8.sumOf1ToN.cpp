#include <iostream>
using namespace std;
int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        // ans = ans + i;
        // or
        ans += i;
    }
    cout << ans;
    return 0;
} 

int main()
{
    int n;
    cin >> n;
    sum(n);
    return 0;
}