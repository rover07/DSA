#include <iostream>

using namespace std;
// string isPrime(int n)
// {
//   for (int i = 2; i * i <= n; i++)
//   {
//     /* code */
//     if (n % i == 0)
//     {
//       return "Not Prime";
//     }
//   }
//   return "Prime";
// };

// bool isArm(int n)
// {
//   int copyOfN = n;
//   int sumOfCubes = 0;

//   while (n != 0)
//   {
//     int digit = (n % 10);
//     sumOfCubes += digit * digit * digit;
//     n /= 10;
//   }
//   return sumOfCubes == copyOfN;
// }

// void gcd(int a, int b)
// {
//   int gcd = 1;
//   for (int i = 1; i <= min(a, b); i++)
//   {
//     if (a % i == 0 && b % i == 0)
//     {
//       gcd = i;
//     }
//   }
//   cout << gcd;
// }

// void gcdUsingEuclid(int a, int b)
// {
//   // while (a != 0 && b != 0)
//   while (a > 0 && b > 0)
//   {

//     if (a > b)
//     {
//       a = a % b;
//     }
//     else
//     {
//       b = b % a;
//     }
//   }
//   // cout << max(a, b);
//   if (a == 0)
//   {
//     cout << b;
//   }
//   else
//     cout << a;
// }

int gcdRecursive(int a, int b)
{
  if (b == 0)
    return a; // base condition

  return gcdRecursive(b, a % b); // we are assuming in our case that the first argument is larger, so thats why we reversed parameters to keep the order properly.
}

int lcm(int a, int b)
{
  int gcd = gcdRecursive(a, b);
  return (a * b) / gcd;
}
int main()
{
  // int n = 48;
  // cout << isPrime(n);

  // // // // Armstrong
  // int n = 153;
  // if (isArm(n))
  // {
  //   cout << "Is an armstrong";
  // }
  // else
  //   cout << "Not";

  // // // // // GCD
  // int a = 20, b = 28;
  // gcd(a, b);

  // // // // // Euclid : GCD
  // int a = 20, b = 28;
  // gcdUsingEuclid(a, b);

  // // // // // Euclid : GCD using Recursion

  int a = 20, b = 28;
  cout << gcdRecursive(a, b) << endl;

  cout << "LCM is: " << lcm(a, b);
  return 0;
}
