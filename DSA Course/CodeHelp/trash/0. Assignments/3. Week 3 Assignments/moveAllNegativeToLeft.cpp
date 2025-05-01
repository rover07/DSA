#include <iostream>
using namespace std;
void moveNegative(int arr[6], int size)
{

    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        // approach 1: comparison of left with right
        //  if (arr[left] < arr[right])
        //  {
        //      right--;
        //  }
        //  else
        //  {
        //      swap(arr[left],arr[right]);
        //      left++;
        //      right--;
        //  }

        // approach2: comparison of left and right with respect to 0
        //
        if (arr[left] < 0)
        {
            left++;
        }
        else if (arr[right] > 0)
        {
            right--;
        }
        else
        {
            swap(arr[left], arr[right]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {1, 2, -3, 4, -5, 6};
    int size = 6;
    moveNegative(arr, size);

    return 0;
}