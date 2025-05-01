// Functions

// 1. count

// #include <iostream>
// using namespace std;

// void count()
// {
//     int num;
//     cin >> num;
//     for (int i = 0; i < num; i++)
//     {
//         cout << i;
//         cout << endl;
//     }
// }

// int main()
// {

//     count();
//     return 0;
// }

// 2. factorial

// #include <iostream>
// using namespace std;
// void facto(int factorial)
// {
//     int ans = 1;
//     for (int i = factorial; i > 0; i--)
//     {
//         ans = ans * i;
//     }
//     cout << ans;
// }
// int main()
// {
//     int factorial;
//     cin >> factorial;
//     facto(factorial);
//     return 0;
// }

// 3. max of three

// #include <iostream>
// using namespace std;
// void maxOfThree(int a, int b, int c)
// {
// if (a > b && a > c)
// {
//     cout << "a is largest";
// }
// else if (b > a && b > c)
// {
//     cout << "b is largest";
// }
// else
//     cout << "c is largest";
// better way

//     int ans = max(a, b);
//     int finalAns = max(ans, c);
//     if (finalAns == a)
//     {
//         cout << "a is largest";
//     }
//     else if (finalAns == b)
//     {
//         cout << "b is largest";
//     }
//     else
//         cout << "c is largest";
//     // cout << "largest number is:" << finalAns;
// }

// int main()
// {

//     maxOfThree(3, 6, 11);

//     return 0;
// }

// 4. Prime or not?

// #include <iostream>
// using namespace std;
// int primeNo(int num)
// {
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int num;
//     cout << "enter number";
//     cin >> num;
//     bool ans = primeNo(num);
//     if (ans)
//     {
//         cout << "prime";
//     }
//     else
//     {
//         cout << "Not prime";
//     }
//     return 0;
// }

// 5. Odd or Even

// #include <iostream>
// using namespace std;

// void oddOrEven(int num)
// {
//     if (num % 2 == 0)
//     {
//         cout << "even number";
//     }
//     else
//         cout << "odd number";
// }
// int main()
// {
//     int num;
//     cin >> num;
//     oddOrEven(num);
//     return 0;
// }

// // 6. Prime number upto N
// #include <iostream>
// #include <math.h>
// using namespace std;
// int prime(int num)
// {
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int num;
//     cout << "Enter number upto which you want prime numbers:";
//     cin >> num;

//     for (int i = 2; i < num; i++)
//     {
//         int ans = prime(num);
//         if (ans == 1)
//         {
//             cout << num << " ";
//         }
//     }
//     return 0;
// }

//

//

///

//

// // 3. Prime or not (trying again after longer time)
// #include <iostream>
// #include <cmath>
// using namespace std;

// void primeOrNot(int num)
// {
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << "Not a prime";
//             break;
//         }
//         else if ((num % i > 0) && (i == (num - 1)))
//         {
//             cout << "The number is prime";
//         }
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     primeOrNot(num);
//     return 0;
// }

// // 4. prime no. upto 'N' (trying again after longer time)
#include <iostream>

using namespace std;
void sumOfPrime(int current)
{
    bool ans;
    for (int i = 2; i < current; i++)
    {
        if ((current % i) == 0)
        {
            break;
        }
        else if ((current % i != 0) && (i == (current - 1)))
        {
            cout << current << endl;
        }
    }
}
int main()
{
    int end;
    cin >> end;
    for (int current = 1; current <= end; current++)
    {

        sumOfPrime(current);
    }

    return 0;
}
