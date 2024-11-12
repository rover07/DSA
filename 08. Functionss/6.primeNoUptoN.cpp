// how it's done->
// 1) initialize end point
// 2) make a loop and declare start and end point
// 3) make a function inside loop that verifies each number from 2 to current number. This way each number is checked for its primeness. If its not a prime, the 'break' keyword will exit the function
// 4) if you want to print without returning, use: 'else if ((current % i != 0) && (i == (current - 1)))' -> cout<<current;
#include <iostream>
#include <math.h>
using namespace std;
void prime(int start)
{
    for (int i = 2; i < start; i++)
    {
        if (start % i != 0)
        {
            cout << start << endl;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int end;
    cin >> end;
    for (int start = 1; start <= end; start++)
    {
        prime(start);
    }
    return 0;
}

// bool checkPrime(int &num)
// {

//     for (int i = 2; i < num; i++)
//     // This is for checking prime or not
//     // for (int i = 2; i < sqrt(n); i++)

//     {

//         if (num % i == 0)
//         {
//             return 0;
//         }
//     }
//     return num;
// }
// int main()
// {

//     int num;
//     cin >> num;
//     for (int i = 2; i < num; i++)
//     // this is the number of times the iterations will run so as to cover each and every number
//     {
//         bool ans = checkPrime(i);
//         if (ans == 1)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }