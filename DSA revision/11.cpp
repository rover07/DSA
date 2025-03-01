// 11. Arrays(Level 02)
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// 1. Find Unique Element
// void fun(vector<int> arr)
// {
// int size = arr.size();
// int ans = 0;
// for (int i = 0; i < size; i++)
// {
// ans = ans ^ arr[i];
// }
// cout << ans;
// }
// int main()
// {
//
// vector<int> arr{2, 1, 2, 1, 3, 4, 4, 5, 6, 6, 5};
// fun(arr);
// return 0;
// }
//

// // // 2. Union of 2 arrays
// int main()
// {
//     int arr[] = {1, 2, 3};
//     int sizeArr = 3;
//     int brr[] = {3, 4, 5, 6};
//     int sizeBrr = 4;
//     vector<int> ans;
//     for (int i = 0; i < sizeArr; i++)
//     {
//         for (int j = 0; j < sizeBrr; j++)
//         {
//             if (arr[i] == brr[j])
//             {
//                 arr[i] = INT_MIN;
//                 ans.push_back(brr[j]);
//                 brr[j] = INT_MIN;
//             }
//         }
//     }
//     for (int i = 0; i < sizeArr; i++)
//     {
//         if (arr[i] != INT_MIN)
//         {
//             ans.push_back(arr[i]);
//         }
//     }
//     for (int i = 0; i < sizeBrr; i++)
//     {
//         if (brr[i] != INT_MIN)
//         {
//             ans.push_back(brr[i]);
//         }
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

////// 3. Intersection
// void intersection(int arr[], int brr[], vector<int> ans, int sizeArr, int sizeBrr)
// {
//     for (int i = 0; i < sizeArr; i++)
//     {
//         for (int j = 0; j < sizeBrr; j++)
//         {
//             if (arr[i] == brr[j])
//             {
//                 ans.push_back(arr[i]);
//                 arr[i] = INT_MIN;
//                 brr[j] = INT_MIN;
//             }
//         }
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         /* code */
//         cout << ans[i] << endl;
//     }
// }

// int main()
// {
//     int arr[] = {-1, 2, -3, -3, -1};
//     int sizeArr = 4;
//     int brr[] = {4, 5, 2, -3, -3, 6};
//     int sizeBrr = 6;
//     vector<int> ans;
//     intersection(arr, brr, ans, sizeArr, sizeBrr);
// }

////// 4. Triplet Sum
// int main()
// {
//     vector<int> arr = {10, 20, 30, 40, 50, 60};
//     int size = arr.size();
//     int target = 80;
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         for (int j = i + 1; j < size; j++)
//         {
//             /* code */
//             for (int k = j + 1; k < size; k++)
//             {
//                 if (target == arr[i] + arr[j] + arr[k])
//                 {
//                     cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
//                 }
//             }
//         }
//     }
// }

/////5. Pair Sum (same as triplet sum)

/////6. SHift Arrays Element By 1
// void fun(int arr[], int size)
// {
//     int temp = arr[size - 1];
//     for (int i = size - 1; i >= 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = temp;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << ' ';
//     }
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     int size = 4;
//     fun(arr, size);

//     return 0;
// }

//////7. Sort 0s and 1 (Counting method)
void countZeroToOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)

    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "Zero count is:" << zeroCount << endl;
    cout << "One Count is:" << oneCount << endl;

    // Sorting time
    for (int j = 0; j < zeroCount; j++)
    {
        arr[j] = 0;
    }
    for (int j = zeroCount; j < zeroCount + oneCount; j++)
    {
        arr[j] = 1;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    // 0s= 6
    // 1s= 3
    int size = 9;
    countZeroToOne(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}