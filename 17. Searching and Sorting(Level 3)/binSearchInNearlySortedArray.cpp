#include <iostream>
#include <vector>
using namespace std;

void nearlySortedArray(vector<int> arr, int target)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[mid + 1] == target && mid + 1 <= size)
        {
            ans = mid + 1;
            break;
        }
        else if (arr[mid - 1] == target && mid - 1 >= 0)
        {
            ans = mid - 1;
            break;
        }
        else if (arr[mid] > target)
        {
            end = mid - 2;
        }
        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
    }
    if (ans == -1)
    {
        cout << "Not Found!";
    }
    else
        cout << "Element at index"
             << "[" << ans << "]";
}

int main()
{

    vector<int> arr{20, 10, 30, 50, 40, 70, 60};
    int target;
    cout << "Enter target";

    cin >> target;
    nearlySortedArray(arr, target);

    return 0;
}