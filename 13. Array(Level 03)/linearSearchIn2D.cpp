#include <iostream>
using namespace std;
//
// My fxn which prints exact location
///
// void findKey(int arr[][3], int rows, int cols)
// {
//     int target = 6;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 cout << "Target found at:"
//                      << "(" << i << ',' << j << ")" << endl;
//             }
//         }
//     }
// }

// int main()
// {
//     // Eg. 1st row: 1+2+3+4=10
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {6, 8, 9}};
//     int rows = 3;
//     int cols = 3;
//     findKey(arr, rows, cols);
//     return 0;
// }
//
//
//
//

// Babbars code which returns true or false

bool findKey(int arr[][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // Eg. 1st row: 1+2+3+4=10
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {6, 8, 9}};
    int Answer = findKey(arr, 3, 3, 6);
    // cout << Answer;
    // if we want answer in true or false and not in 0 and 1, do this
    if (Answer)
    {
        cout << "True";
    }
    else
        cout << "False";
    return 0;
}