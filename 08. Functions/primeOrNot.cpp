
#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter number";
    cin >> n;
    bool prime = checkPrime(n);
    if (prime)
    {
        cout << "Is prime";
    }
    else
        cout << "Not prime";
    return 0;
}