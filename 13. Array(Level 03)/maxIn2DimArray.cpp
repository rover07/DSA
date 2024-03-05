// this is max of array, similarly we can domin too
#include <iostream>
#include <limits.h>
using namespace std;

int maxInArray(int arr[][3], int rows, int cols)
{

    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{

    int arr[3][3] = {{111, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int answer = maxInArray(arr, 3, 3);
    cout << "Maximum number in array is" << answer;
    return 0;
}