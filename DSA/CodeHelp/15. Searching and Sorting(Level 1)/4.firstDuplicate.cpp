#include <iostream>
using namespace std;

int firstDuplicateOccurrence(int arr[], int target, int size)
{
    int ans = -1; // same as if nothing found we return -1, this will be returned if nothing found so -1 is initialized here.
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    //
    // Better ways so as to avoid size overflow
    // Better way #1
    int mid = start + (end - start) / 2;
    // Better way #2
    // int mid = start / 2 + end / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // ans banao
            ans = mid;
            // left mein jao
            end = mid - 1;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 30, 30, 40, 50};
    int size = 7;
    int target;
    cout << "Enter target:";
    cin >> target;
    int ans = firstDuplicateOccurrence(arr, target, size);

    if (ans == -1)
    {
        cout << "Element not found!";
    }
    else
    {
        cout << "Element found at index: " << ans;
    }
    return 0;
}