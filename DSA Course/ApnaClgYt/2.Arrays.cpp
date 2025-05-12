// #include <iostream>

// using namespace std;

// int main()
// {
//   int marks[5] = {10, 20, 30, 40, 55};
//   // Explicitly mentioned size here
//   int size = 5;
//   // Finding Size by ourselves
//   int sizeMarks = sizeof(marks) / sizeof(int);
//   // Here sizeof(marks) -> 20 Bytes
//   // sizeof(int) -> 4
//   // So division of both gives us -> 5

//   cout << sizeMarks << endl;
//   for (int i = 0; i < sizeMarks; i++)
//   {
//     /* code */
//     cout << marks[i] << endl;
//   }

//   return 0;
// }

// // // Taking inputs in array

// #include <iostream>

// using namespace std;

// int main()
// {
//   int size = 5;
//   int marks[size];

//   for (int i = 0; i < size; i++)
//   {
//     /* code */
//     cout << "Enter data";
//     cin >> marks[i];
//   }

//   for (int i = 0; i < size; i++)
//   {
//     /* code */
//     cout << marks[i] << endl;
//   }

//   return 0;
// }

// // // // Find smallest value
// #include <iostream>
// #include <limits.h>
// using namespace std;

// int main()
// {
//   int arr[6] = {5, 15, 22, 1, -15, 24};
//   int size = sizeof(arr) / sizeof(int);
//   int smallest = INT_MAX;

//   for (int i = 0; i < size; i++)
//   {

//     // // Way 1:
//     // if (arr[i] <smallest)
//     // {
//     //   smallest = arr[i];
//     // }

//     //  // Way 2: Using min()
//     // // This is better as the number is only replaced when it is minimum on comparison else it isnt worked upon saving time and power
//     smallest = min(smallest, arr[i]);
//   }
//   cout << smallest;

//   return 0;
// }

// // //  Finding Index of Smallest Value
// #include <iostream>
// #include <limits.h>
// using namespace std;

// int main()
// {
//   int arr[6] = {5, 15, 22, 1, -15, 24};
//   int size = sizeof(arr) / sizeof(int);
//   int smallest = INT_MAX;
//   int index = 0;

//   for (int i = 0; i < size; i++)
//   {
//     //    // Way 1

//     // if (arr[i] < smallest)
//     // {
//     //   smallest = arr[i];
//     //   index = i;
//     // }

//     //    // Way 2
//     smallest = min(smallest, arr[i]);
//     if (smallest == arr[i])
//     {
//       index = i;
//     }
//   }
//   cout << "Smallest Value " << smallest << endl;
//   cout << "Index " << index;

//   return 0;
// }

// // // // Reverse and array (inplace)
#include <iostream>

using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = size - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}

// // // // Intersection of 2 arrays
// #include <iostream>
// using namespace std;

// void intersectionFind(int arr1[], int arr2[], int size1, int size2)
// {
//   for (int i = 0; i < size1; i++)
//   {
//     for (int j = 0; j < size2; j++)
//     {
//       if (arr1[i] == arr2[j])
//       {
//         cout << arr1[i] << " ";
//         break;
//       }
//     }
//   }
// }

// int main()
// {
//   int arr1[] = {2, 6, 4, 2, 9, 23, 2, 86, 86};
//   int arr2[] = {1, 2, 3, 5, 6, 22};

//   int size1 = 6;
//   int size2 = 6;

//   // removing repeated element from array1
//   for (int i = 0; i < size1; i++)
//   {
//     for (int j = 0; j < size1; j++)
//     {
//       if (arr1[i] == arr1[j] && i != j)
//       {
//         // after finding element with repeat value we are shifting array element
//         // and decreasing size of element
//         for (int i = j; i < size1; i++)
//         {
//           arr1[i] = arr1[i + 1];
//         }
//         size1--;
//         j--; // after shifting element we need to decrease j to check next element
//       }
//     }
//   }

//   intersectionFind(arr1, arr2, size1, size2);

//   return 0;
// }