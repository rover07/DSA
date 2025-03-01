#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int target, int size)
{
    int ans = -1; // same as if nothing found we return -1, this will be returned if nothing found so -1 is initialized here.
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // ans banao
            ans = mid;
            // left mein jao
            start = mid + 1;
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

int firstOccurrence(int arr[], int target, int size)
{
    int ans = -1; // same as if nothing found we return -1, this will be returned if nothing found so -1 is initialized here.
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
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

int totalOccurrence(int arr[], int target, int size)
{
    int first = firstOccurrence(arr, target, size);
    int last = lastOccurrence(arr, target, size);
    int total = last - first + 1;
    return total;
}

int main()
{
    int arr[] = {10, 20, 30, 30, 30, 30, 50};
    int size = 7;
    int target;
    cout << "Enter target:"; 
    cin >> target;
    int total = totalOccurrence(arr, target, size);

    cout << "Total occurrence is " << total;
    return 0;
}