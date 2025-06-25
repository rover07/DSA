#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char idk[] = {'a', 'b'}; // Without \0, this is just char arrau
  char str[] = {'a', 'b', 'c', '\0'};
  cout << str << endl; // this returns not the address but "abc"
                       // // The characters are converted into single string
  int arr[] = {1, 2, 3};
  cout << arr << endl; // constant pointer which returns address

  char str2[] = {'a', 'b', 'c', '\0'}; // // This is string
  // // Valid string: As there is null character ending the string, that makes this valid string
  cout << strlen(str2) << endl; // Out: 3

  char str3[] = "hello";        // This is string literal(whose value is not changeable)
  cout << strlen(str3) << endl; // Out: 3
  cout << str3 << endl;         // Out: hello
  cout << str3[5];              // Out: NOTHING as \0 is null

  // // Char array ends with /0

  // // // /// // // // Taking inputs
  char str4[20]; // specify size before hand
  cout << "Enter Text: ";
  // cin >> str4;
  // cout << str4 << endl;
  // //   If the input contains whitespace then the previous content is retained Eg. hi there -> hi, here "there" is not considered

  // // // // Special function to fix above issue
  char str5[20]; // specify size before hand
  cout << "Enter Streamlined Text: ";
  // Syntax: cin.getline(str_name, len,delim?);
  // // Here, len-> the length that we want to take and transfer to string
  // // Here, delim? -> something that stops the input ie. the stopping point where the input should stop Eg. '$', generally it is '/n' by default.
  // cin.getline(str5, 20);
  // // Using delimiter
  cin.getline(str5, 20, '$');
  cout << str5;

  // // // // /// Output in char Array for each individual character 
  for (char ch : str5)
  {
    cout << ch << endl;
  }

  // // // // // Finding length
  int length = 0;
  for (int i = 0; str5[i] != '\0'; i++) // Stopping when we reach the null character
  {
    length++;
  }
  cout << length << endl;
  return 0;
}
