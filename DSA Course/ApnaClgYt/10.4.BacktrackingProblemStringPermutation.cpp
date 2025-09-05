// Time Complexity: O(n * n!)   // n! permutations, each needs O(n) to build/copy
// Space Complexity: O(n)       // recursion stack (excluding result storage)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // Recursive function to generate all permutations
  void backtrack(string &s, int idx, vector<string> &result)
  {
    // Base case: if index has reached end, we found one permutation
    if (idx == s.size())
    {
      result.push_back(s); // store current permutation
      return;
    }

    // Swap current index with every possible option ahead
    for (int i = idx; i < s.size(); i++)
    {
      swap(s[idx], s[i]);            // make a choice
      backtrack(s, idx + 1, result); // recurse for next position
      swap(s[idx], s[i]);            // undo choice (backtrack)
    }
  }

  vector<string> getPermutations(string s)
  {
    vector<string> result;
    backtrack(s, 0, result);
    return result;
  }
};

int main()
{
  Solution sol;
  string str = "abc";
  vector<string> perms = sol.getPermutations(str);

  cout << "All permutations of " << str << " are:\n";
  for (auto &p : perms)
  {
    cout << p << "\n";
  }
  return 0;
}
