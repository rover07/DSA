// 10. Arrays(Level 01)
#include <iostream>
#include <limits.h>
using namespace std;
// // 1. Array Basics
int main()
{
    int arr[5];
    cout << addressof(arr) << endl;
    cout << sizeof(arr) << endl;

    cout << arr << endl;
    cout << &arr << endl;
    cout << 0x7ffdf0477c10; // address of our arrary in hex used here, this prints address in decimal
    return 0;
}

//
//
// // //2. Linear search
// void linSearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             cout << "Target found";
//             break;
//         }
//         else if (i >= (size - 1))
//         {
//             cout << "Target not found";
//         }
//     }
// }
// int main()
// {

//     int arr[5];
//     int size = 5;
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         cout << "enter" << i << "th input";
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter value to search";
//     cin >> target;
//     linSearch(arr, size, target);
// }

//
//
// // 3. Linear Search using Flag
// void linSearch(int arr[], int size, int target, int flag)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             flag = 1;
//         }
//     }
//     if (flag == 1)
//     {
//         cout << "Target found";
//     }
//     else
//     {
//         cout << "Target not found";
//     }
// }
// int main()
// {

//     int arr[5];
//     int size = 5;
//     int flag = 0;
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         cout << "enter" << i << "th input";
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter value to search";
//     cin >> target;
//     linSearch(arr, size, target, flag);
// }

//
// 4. Reverse Array
// // my way
// void reverseArray(int arr[], int size)
// {
//     for (int i = 0; i < size / 2; i++)
//     {
//         swap(arr[i], arr[size - (i + 1)]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         cout << arr[i] << endl;
//     }
// }

// // using while loop
// void reverseArray(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     while (left < right)
//     {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
//

// // using for loop
// void reverseArray(int arr[], int size)
// {
//     int i = 0;
//     int j = size - 1;

//     for (int i = 0; j = size - 1; i < j; i++; j--)
//     {
//         swap(arr[i], arr[j]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = 6;
//     reverseArray(arr, size);
//     return 0;
// }

// // //  5. Max in an array
// // 1st way
// void maxInArr(int arr[], int size)
// {
//     int maxAns = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > maxAns)
//         {
//             maxAns = arr[i];
//         }
//         /* code */
//     }
//     cout << "max in array" << max;
// }

// // 2nd way
// void maxInArr(int arr[], int size)
// {
//     int maxAns = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         maxAns = max(arr[i], maxAns);
//     }
//     cout << "max in array" << maxAns;
// }

// int main()
// {
//     int arr[] = {1, 2, 33, 4, 0};
//     int size = 5;
//     maxInArr(arr, size);
// }

// // // 6. Similarly do Min

// // // 7. count 0s and 1s
// void count(int arr[], int size)
// {
//     int zeroCount = 0;
//     int oneCount = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zeroCount++;
//         }
//         else if (arr[i] == 1)
//         {
//             oneCount++;
//         }
//     }
//     cout << zeroCount << " " << oneCount;
// }

// int main()
// {
//     int arr[] = {1, 2, 12, 1, 1, 0, 33, 4, 0};
//     int size = 9;
//     count(arr, size);
// }

//
//
// // 7. extreme Print
// void extremePrint(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     for (int i = 0; i < size; i++)

//     {
//         cout << "Enter value";
//         cin >> arr[i];
//     }
//     while (left <= right)
//     {
//         if (left == right)
//         {
//             cout << arr[left];
//         }
//         else
//         {

//             cout << arr[left];
//             cout << arr[right];
//         }
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     int size;
//     cout << "enter size";
//     cin >> size;
//     int *arr = new int[size];
//     extremePrint(arr, size);
// }