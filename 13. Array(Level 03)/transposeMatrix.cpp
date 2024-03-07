#include <iostream>
using namespace std;

//
// Doing with void return type
//
//
//
void transposeMatrix(int arr[][3], int rows, int cols)
{
    // Method  1: Using new empty array
    //  int transpose[3][4];
    //  for (int i = 0; i < rows; i++)
    //  {
    //      for (int j = 0; j < cols; j++)
    //      {
    //          transpose[i][j] = arr[j][i];
    //      }
    //  }
    //  cout << "Transpose of the marix is:" << endl;
    //  for (int i = 0; i < rows; i++)
    //  {
    //      for (int j = 0; j < cols; j++)
    //      {
    //          cout << transpose[i][j] << " ";
    //      }
    //      cout << endl;
    //  }

    //
    //
    // Method 2: Using swap function

    //
    //
    for (int i = 0; i < cols; i++)
    {
        for (int j = i; j < rows; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << "Transpose of the marix is:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[i][j] << " ";
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

//
//
//  failed to do this with int return type
//
// maybe create another fxn to print and see what happens
//

// take reference of above working code and use swap function instead
//
//   int transposeMatrix(int arr[][3], int rows, int cols)
//   {
//       int ans[3][3];
//       for (int i = 0; i < cols; i++)
//       {
//           for (int j = 0; j < rows; j++)
//           {
//               arr[i][j] = arr[j][i];
//           }
//       }

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             ans[i][j] = arr[i][j];
//         }
//         // cout << endl;
//         return ans[3][3];
//     }
// }

// int main()
// {

//     int arr[3][3] = {{-1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int answer = transposeMatrix(arr, 3, 3);
//     cout << "Transpose of the matrix is:" << endl;
//     cout << answer << " ";
//     return 0;
// }

//
//
//