#include <iostream>
using namespace std;

bool binSearch(int arr[][3], int rows, int cols, int target)
{

    int start = 0;
    int size = rows * cols;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        int element = arr[rowIndex][colIndex];

        if (element == target)
        {
            cout << "Found at index:" << rowIndex << " " << colIndex;
            return true;
        }
        else if (element > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    int target;
    cout << "Enter target:";
    cin >> target;
    bool ans = binSearch(arr, rows, cols, target);

    if (ans)
    {
        cout << "";
    }
    else
        cout << "Element not found!!!!";
    return 0;
}