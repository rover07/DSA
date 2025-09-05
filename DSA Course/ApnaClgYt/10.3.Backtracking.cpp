#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i)
{
  if (i == arr.size())
  {
    for (int val : ans)
    {
      cout << val << " ";
    }
    cout << endl;
    return;
  }

  // inclusion
  ans.push_back(arr[i]);
  printSubsets(arr, ans, i + 1);

  ans.pop_back(); // performed during backtracking
  // exclusion
  printSubsets(arr, ans, i + 1);
}

int main()
{
  // // Print all subsets

  vector<int> arr = {1, 2, 3};
  vector<int> ans;
  // The smallest step is to find subset of 1 element
  // The choice here is to either add the element to the subset or not add
  printSubsets(arr, ans, 0);
  return 0;
}
