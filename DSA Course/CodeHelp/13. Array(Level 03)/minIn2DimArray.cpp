
#include <iostream>
#include <limits.h>
using namespace std;

int minInArray(int arr[][3], int rows, int cols)
{

    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main()
{

    int arr[3][3] = {{-1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int answer = minInArray(arr, 3, 3);
    cout << "Maximum number in array is" << answer;
    return 0;
}