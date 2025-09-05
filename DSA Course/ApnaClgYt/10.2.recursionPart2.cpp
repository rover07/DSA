#include <iostream>
#include <vector>
using namespace std;

// // 1. Fibonacci
int fib(int value)
{
  if (value == 0 || value == 1)
  {
    return value;
  }
  return fib(value - 1) + fib(value - 2);
}

bool isSorted(vector<int> arr, int n)
{
  if (n == 0 || n == 1)
    return true; // base case
  return arr[n - 1] > arr[n - 2] && isSorted(arr, n - 1);
}

int main()
{
  cout << fib(8) << endl;
  vector<int> arr = {1, 2, 3, 4, 5};
  cout << "Is sorted or not: " << isSorted(arr, arr.size());

  return 0;
}
