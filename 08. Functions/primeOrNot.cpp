#include <math.h>
#include <iostream>
using namespace std;

bool checkPrime(int n)
{

    // If n is divisible by numbers in range (2 to n-1), then it is not a prime number hence we have returned false, esle its prime
    //
    // for (int i = 2; i < n; i++)

    // sqrt() provides more optimised solution as sqrt of that number is bound to provide more close value of a number which is Not Prime
    for (int i = 2; i < sqrt(n); i++)

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