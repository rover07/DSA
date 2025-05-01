#include <iostream>
using namespace std;

int missingElementInSortedArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int diff = arr[mid] - mid;
        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            // stored index
            ans = mid;+
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    // Corner case
    if (ans == -1) // agar andar pakda he nahi missing toh ans =-1 tha, so we'll make it ans=0 by adding 1.
    {
        // use this if condition given is: array from range 1 to size;
        //
        //  return size + 1;    // for right corner case
        //
        // use this if condition given is: array from range 0 to n-1;
        return size - size; // for left corner case
    }
    return ans + 1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int ans = missingElementInSortedArray(arr, size);

    cout << ans << " is missing";

    return 0;
}