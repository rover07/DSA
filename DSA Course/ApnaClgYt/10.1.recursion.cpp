#include <iostream>

using namespace std;

// // // Print from n to 1
// void recursivePrintNum(int n)
// {
//   // Base Case
//   if (n == 1)
//   {
//     cout << n;
//     return 0;
//   }

//   cout << n << endl;
//   recursivePrintNum(n - 1);
//   // if there is nothing below this point, we return automatically during call stack
// };

// // // // N Factorial
// int facto(int n)
// {
//   if (n == 0) // Base Case: We know iska answer
//   {
//     return 1;
//   }
//   return n * facto(n - 1);
// }

int sumOfNums(int n)
{

  if (n == 1)
  {
    return 1;
  }
  // Recurrence Relation here: f(n)=n+f(n-1)
  return n + sumOfNums(n - 1);
}

int main()
{
  int n = 5;
  // recursivePrintNum(n);

  // cout << facto(n);

  cout << sumOfNums(n);
  return 0;
}
