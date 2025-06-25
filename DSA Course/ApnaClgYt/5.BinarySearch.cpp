// // // // Binary Search
#include <iostream>

using namespace std;

void binarySrch(int arr[], int size, int target)
{
  int start = 0;
  int end = size - 1;

  int idx;
  for (int i = start; i < end; i++)
  {
    int mid = (start + end) / 2;

    if (target < arr[i])
    {
      end = mid;
      idx = end;
    }
    else
    {
      start = mid;
      idx = start;
    }
  }
  cout << "Target is at index: " << idx;
}
int main()
{
  int arr[] = {-1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(arr) / sizeof(int);
  int target = 2;
  binarySrch(arr, size, target);
  return 0;
}
