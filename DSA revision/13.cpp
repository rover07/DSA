// #13. Array(Level 03)
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;
// // 1. 2D Array
// int main()
// {
//     int arr[3][3] =
//         {{1, 2, 3},
//          {4, 5, 6},
//          {7, 8, 9}};
//     int rowSize = 3;
//     int colSize = 3;
// cout << "rowwise" << endl;
// for (int i = 0; i < rowSize; i++)
// {
//     for (int j = 0; j < colSize; j++)
//     {
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }
// cout << "colwise" << endl;
//     for (int i = 0; i < rowSize; i++)
//     {
//         for (int j = 0; j < colSize; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // 2. Linear Search in 2D
// void findKey(int arr[][3], int rows, int cols)
// {
//     int target;
//     cout << "Enter target to be found";
//     cin >> target;
//     int counter = 0;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)

//         {
//             if (target == arr[i][j])
//             {
//                 cout << "Target found at" << "(" << i << ',' << j << ")" << endl;
//                 counter = 1;
//             }
//         }
//     }
//     if (counter != 1)
//     {
//         cout << "Target not found";
//     }
// }

// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {6, 8, 9}};
//     int rows = 3;
//     int cols = 3;
//     findKey(arr, rows, cols);
//     return 0;
// }

// // 3. Max in 2Dimension Array
// void maxInArray(int arr[][3], int rows, int cols)
// {

//     int maxAns = INT_MIN;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             maxAns = max(maxAns, arr[i][j]);
//         }
//     }
//     cout << maxAns;
// }
// int main()
// {

//     int arr[3][3] = {{111, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     maxInArray(arr, 3, 3);
//     return 0;
// }

// // 4. Transpose Matrix(Method 1: Using new empty array)
void transposeMatrix(int arr[][3], int rows, int cols)
{
    int newArr[cols][rows];
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j < cols; j++)
        {
            /* code */
            newArr[j][i] = arr[i][j];
        }
    }
    cout << "Transpose of the marix is:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int arr[4][3] = {{-1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    transposeMatrix(arr, 4, 3);
    return 0;
}