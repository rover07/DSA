// #14. Array(Extra Class)
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;
// // 1. Sort Negative and Positive

// void countZeroToOne(vector<int> arr, int size)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     for (int i = start; i < end; i++)
//     {
//         if (arr[start >= 0])
//         {
//             swap(arr[start], arr[end]);
//             end--;
//         }
//         else
//         {
//             start++;
//         }
//         /* code */
//     }

//     // PRint
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     vector<int> arr = {23, -7, 12, -10, -11, 40, 60};

//     int size = arr.size();
//     countZeroToOne(arr, size);

//     return 0;
// }

// // // #2. reverse vector

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    reverse(arr.begin(), arr.end());

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// // // #3. reverse array
// int main()
// {

//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;

//     reverse(arr, arr + size);

//     for (int i = 0; i <= 4; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }