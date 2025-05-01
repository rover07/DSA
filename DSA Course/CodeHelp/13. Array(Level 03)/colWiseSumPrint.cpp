#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][4], int rows, int cols)
{
    int ans[4];
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << "  ";
    }
}
int main()
{
    // Eg. 1st col: 1+2+5+2+1=11
    int arr[5][4] = {{1, 2, 3, 4}, {2, 3, 4, 1}, {5, 6, 1, 3}, {2, 4, 6, 8}, {1, 9, 9, 6}};
    int rows = 5;
    int cols = 4;
    printRowWiseSum(arr, rows, cols);
    return 0;
}