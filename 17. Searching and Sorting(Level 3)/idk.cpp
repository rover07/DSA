#include <iostream>
#include <vector>
using namespace std;
void nearlySortedArray(vector<int> arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    if (target <= arr[end])
    {

        while (start <= end)
        {
            if (arr[mid] == target)
            {
                cout << target << "in sorted array will be at " << mid;
                break;
            }
            else if ((mid - 1 >= 0 && arr[mid - 1]) == target)
            {
                cout << target << "in sorted array will be at " << mid - 1;
                break;
            }
            else if (mid + 1 < arr.size() && arr[mid + 1] == target)
            {
                cout << target << "in sorted array will be at " << mid + 1;
                break;
            }
            else if (arr[mid] < target)
            {
                start = mid + 2;
            }
            else if (arr[mid] > target)
            {
                end = mid - 2;
            }
            mid = start + (end - start) / 2;
        }
    }
    else
    {
        cout << "Target not found!";
    }
}
int main()
{
    vector<int> arr{3, 10, 20, 40, 50, 70, 80};
    int target;
    cout << "Enter target: ";
    cin >> target;
    int size = arr.size();
    nearlySortedArray(arr, size, target);
    return 0;
}