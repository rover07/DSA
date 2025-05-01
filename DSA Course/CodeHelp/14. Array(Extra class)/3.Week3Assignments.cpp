// // 01. missingElementsFromArrayWithDuplicates
// #include <iostream>
// using namespace std;

// void missingElement(int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int index = abs(arr[i]); // using present element as index
//         if (arr[index - 1] > 0)  //-1 because our array starts from 1 so we have to adjust it woth 0 based indexing
//             arr[index - 1] *= -1;
//     }

//     // now getting the index ov value which has pocitive value, positive because it was double checked due to it being duplicate
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > 0)
//             cout << i + 1; //+1 because our array starts from 1
//         // break;
//     }

//     // // print
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }
// }

// int main()
// {
//     int arr[] = {1, 3, 5, 3, 4}; // 2 is missing
//     int size = sizeof(arr) / sizeof(int);
//     missingElement(arr, size);
//     return 0;
// }

// // // 02. Move All Negative to Left
// #include <iostream>
// using namespace std;
// void moveNegative(int arr[6], int size)
// {

//     int left = 0;
//     int right = size - 1;
//     while (left <= right)
//     {
//         // approach 1: comparison of left with right
//         //  if (arr[left] < arr[right])
//         //  {
//         //      right--;
//         //  }
//         //  else
//         //  {
//         //      swap(arr[left],arr[right]);
//         //      left++;
//         //      right--;
//         //  }

//         // approach2: comparison of left and right with respect to 0
//         //
//         if (arr[left] < 0)
//         {
//             left++;
//         }
//         else if (arr[right] > 0)
//         {
//             right--;
//         }
//         else
//         {
//             swap(arr[left], arr[right]);
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[6] = {1, 2, -3, 4, -5, 6};
//     int size = 6;
//     moveNegative(arr, size);

//     return 0;
// }

// // 3. Wave Print a Matrix
// #include <iostream>
// #include <vector>
// using namespace std;
// void wavePrint(vector<vector<int>> nums)
// {
//     int rowSize = nums.size();
//     int colSize = nums[0].size();
//     // i here stands for columns. I emphasize that here and here only, i may vary on the bas of how i initialize it
//     for (int i = 0; i < colSize; i++)
//     {
//         if ((i & 1) == 0)
//         // if (i % 2 == 0) //works too
//         {
//             for (int j = 0; j < rowSize; j++)
//             { // Top to bottom
//                 cout << nums[j][i] << " ";
//             }
//         }
//         else
//             // for odd no of columns
//             //  go bottom to Top
//             for (int j = rowSize - 1; j >= 0; j--)
//             {
//                 {
//                     cout << nums[j][i] << " ";
//                 }
//             }
//     }
// }
// int main()
// {
//     vector<vector<int>> nums{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     wavePrint(nums);
//     return 0;
// }