#include <iostream>
using namespace std;
int main()
{
    // int arr[3][3] =
    //     {{1, 2, 3},
    //      {4, 5, 6},
    //      {7, 8, 9}};
    // // cin >> arr[0][1];
    // int rowSize = 3;
    // int colSize = 3;
    // cout << "rowwise" << endl;
    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "column-wise" << endl;
    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
    //
    //
    //
    //
    // taking user input
    int arr[4][3];
    int rows = 4;
    int cols = 3;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}