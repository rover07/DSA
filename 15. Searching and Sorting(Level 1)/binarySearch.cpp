#include <iostream>
using namespace std;

int binSearch(int arr[], int target, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }

        // this is v.v.imo, don't forget it!
        mid = (start + end) / 2;
    }
    // for returning not found and relevant stuffs, using -1 is a good practice although it doesnt matter
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int target;
    cout << "Enter target:";
    cin >> target;
    int ans = binSearch(arr, target, size);

    if (ans == 0)
    {
        cout << "Element not found!";
    }
    else
    {
        cout << "Element found at index: " << ans;
    }
    return 0;
}