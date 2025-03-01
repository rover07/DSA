//////#1. Count all set bits
#include <iostream>
using namespace std;

//
//
// Approach 1: Modulus
//
//
// int countSetBit(int num)
// {
//     int count = 0;
//     while (num > 0)
//     {
//         if (num % 2 == 1)
//         {
//             count++;
//         }
//         num = num / 2;
//     }

//     return count;
// }
// int main()
// {
//     int num;
//     cout << "Enter number:";
//     cin >> num;
//     int ans = countSetBit(num);

//     cout << "Number of set bits=" << ans;
//     return 0;
// }
//
//
// approach 2: Bitwise method-> better]
//
int countSetBit(int num)
{

    int count = 0;
    while (num > 0)
    {
        int bit = 0;
        bit = num & 1;
        // ans =*pow(2,i++)+ans
        if (bit == 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;
    int Answer = countSetBit(num);

    cout << "Number of set bits=" << Answer;
    return 0;
}

// // // #2. Create number using bits
#include <iostream>
using namespace std;
void createNoUsingBits(int numberOfDigits)
{
    int input;
    int num = 0;
    // while (numberOfDigits > 0)
    for (int i = 0; i < numberOfDigits; i++)
    {
        int digit;
        cout << "Enter digit: ";
        cin >> digit;
        num = num * 10 + digit;
        // numberOfDigits--;
    }

    cout << num;
}
int main()
{
    int numberOfDigits;
    cout << "Enter number of inputs:";
    cin >> numberOfDigits;
    createNoUsingBits(numberOfDigits);

    return 0;
}

///////#3. Print all digits of integer
#include <iostream>
using namespace std;
void printAllDigitsOfInteger(int num)
{
    // int ans=0;
    while (num > 0)
    {
        int digit = num % 10;
        cout << digit << endl;
        num = num / 10;
    }
}
int main()
{
    int num;
    cout << "Enter number";
    cin >> num;
    printAllDigitsOfInteger(num);
    return 0;
}

// // // #4. Print all digits of integer using Array
// This doesnt work ,try later

#include <iostream>
#include <vector>
using namespace std;
void printAllDigitsOfInteger(/* int arr[] */ vector<int> arr, int size, int num)
{
    // int ans=0;
    for (int i = 0; i < size; i++)
    {
        while (num > 0)
        {
            int digit = num % 10;
            arr.push_back(digit);
            num = num / 10;
        }
    }
    // reversing this using array
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    // int arr[3];
    // int size = 3;
    vector<int> arr;
    int size = arr.size();
    int num;
    cout << "Enter number";
    cin >> num;
    printAllDigitsOfInteger(arr, size, num);
    return 0;
}
