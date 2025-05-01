// #include <iostream>

// using namespace std;

// int main()
// {
//     string s = "Hi there";
//     int i = 0;
//     unsigned int in = -6;

//     cout << sizeof(s) << endl;
//     cout << sizeof(i) << endl;
//     cout << sizeof(in);
//     return 0;
// }

// // // #1 Type casting
// #include <iostream>

// using namespace std;

// int main()
// {
//     double price1 = 9.99;
//     int price2 = (int)price1;
//     cout << (price2);
//     return 0;
// }

// // // #2 Ternary Oeprator

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n = 54;
//     cout << (n > 100 ? "Vaild" : "Invalid");
//     return 0;
// }

// // // Pass by value
// #include <iostream>

// using namespace std;

// int changes(int a)
// {
//     a = 20;
//     cout << "Outside main function" << a << endl;
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     changes(a);
//     cout << "Inside main" << a;
//     return 0;
// }

// // // Sum of digits
// #include <iostream>

// using namespace std;
// int sumOfDigits(int num)
// {
//     int ans = 0;
//     while (num)
//     {
//         ans += num % 10;
//         num /= 10;
//     }
//     return ans;
// }

// int main()
// {
//     int num = 145;
//     int ans = sumOfDigits(num);
//     cout << num;
//     return 0;
// }

// // // Calculate Binomial Coefficient (nCr)
// #include <iostream>

// using namespace std;

// int main()
// {

//     return 0;
// }

// // // // Binary Number System

// // // Decimal to Binary

// #include <iostream>

// using namespace std;
// void decToBin(int num)
// {
//     int ans = 0;
//     int power = 1;
//     while (num > 0)
//     {

//         int remainder = num % 2;
//         num /= 2;
//         ans += remainder * power;
//         power = power * 10;
//     }
//     cout << ans;
// }

// int main()
// {
//     int num = 42;
//     decToBin(num);
//     return 0;
// }

// // // Binary to Decimal

// #include <iostream>

// using namespace std;
// int binToDec(int num)
// {
//     int ans = 0;
//     int power = 1;
//     while (num > 0)
//     {
//         int remainder = num % 10;
//         num /= 10;
//         ans += remainder * power;
//         power = power * 2;
//     }
//     return ans;
// }
// int main()
// {
//     int num = 101010;
//     cout << binToDec(num);

//     return 0;
// }

// // // // bitwise Operators

// #include <iostream>

// using namespace std;

// int main()
// {
//   cout << (7 >> 1);
//   return 0;
// }

// // // // DT Modifiers

// #include <iostream>

// using namespace std;

// int main()
// {
//   unsigned int custId = 9;
//   cout << custId << endl;
//   cout << sizeof(int) << endl;
//   cout << sizeof(long int) << endl;
//   cout << sizeof(long long int) << endl;
//   cout << sizeof(signed int) << endl;
//   cout << sizeof(unsigned int) << endl;
//   cout << sizeof(long double);
//   return 0;
// }

// // // Q: Find if the number is power of 2 without any loop.
#include <iostream>

using namespace std;

int main()
{
  int num = 34;
  int lastBit;

  lastBit = num % 2;
  if (lastBit == 1)
  {
    cout << "NOT Power of 2";
  }
  else
  {
    num /= 2;
  }

  // while (num > 0)
  // {
  //   num >>= 1;
  // }
  // cout << num << endl;

  // if (num == 0)
  // {
  //   cout << "Power of 2";
  // }
  // else
  //   cout << "Not power of 2";

  return 0;
}
// Lecture completed on 3 March 2025. Homework questions I have done at that time only after pausing the video.In the last two homework questions 2nd question I was able to solve on my own and in 1st question I tried to make logic but was unsuccessful so I took help of chatgpt and there the question was done using bitwise and operator.They have not used left shift and right shift operator.The logic was if (n & (n - 1) == 0) then it is the power of 2 because if any number is a power of 2 so it contains only left most bit as 1 and other right most bits are 0. Ye baat to mere mind me aa gayi thi try karte time.And n - 1 contains 1 digit less than n.For example 4 = 100 in Binary and 4 - 1 = 3 which is 11 in binary.100 has 3 digits and 11 has 2 digits.To kyuki n - 1 me ek digit kam hoti hai to unka AND 00 ke saath 0 hi hoga and left most bit n ki 1 hoti hai and n - 1 ki 0 hoti hai to again AND is 0. So if (n & (n - 1) == 0) then number is power of 2 otherwise not.
