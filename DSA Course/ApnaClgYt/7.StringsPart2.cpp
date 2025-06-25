#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  // string str = "rover"; // dynamic as resizes on runtime
  // cout << str << endl;

  // // // Operations
  // string str1 = "apna";
  // string str2 = "college";

  // cout << str1 + str2 << endl;   // concatenation
  // cout << (str1 > str2) << endl; // checks dictionary wise

  // string str3;
  // // // Again, cin is not good if there are whitespaces
  // getline(cin, str3);
  // cout << str3 << endl;

  // // // // // Loops: Same as arrays by accesssing characters using indexes

  // string str4 = "apna college";
  // reverse(str4.begin(), str4.end()); // This function doesnt return pointers, it returns iterators.
  // cout << str4;
  // return 0;

  // // // /// // Question: Palindrome or not
  string s = "madam";
  int start = 0;
  int end = s.length() - 1;
  if (s[start] == s[end])
  {
    start++;
    end--;
  }
  else
  {

    cout << "Not a palindrome";
    return -1;
  }

  cout << "This is a palindrome";
}
