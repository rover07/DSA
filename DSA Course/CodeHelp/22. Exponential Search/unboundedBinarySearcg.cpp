#include <iostream>
using namespace std;

int BinSearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return -1;
}

int expoSearch(int arr[], int size, int target)
{
    if (arr[0] == target)
        return 0;
    int i = 0;
    int j = 1;
    while (arr[j] < target)
    {
        i = j;
        j *= 2;
    }
    return BinSearch(arr, i, j, target);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int size = sizeof(arr) / sizeof(int);
    int target = 13;
    int ans = expoSearch(arr, size, target);
    cout << "Our index is:" << ans;
    return 0;
}