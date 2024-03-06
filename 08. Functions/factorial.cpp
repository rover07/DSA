#include <iostream>
using namespace std;

int fact(int factorial)
{
    int ans = 1;
    for (int i = 1; i <= factorial; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int factorial;
    cin >> factorial;

    int ans = fact(factorial);
    cout << "Factorial of" << factorial << "is: " << ans;
    return 0;
}