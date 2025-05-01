#include <iostream>
#include <vector>
using namespace std;

int pivotElement(vector<int> nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (start == end)
        {
            return start;
        }

        if (nums[mid] > nums[mid + 1] && mid + 1 <= end)
        { // means we're on mid
            return mid;
        }

        if (nums[mid - 1] > nums[mid] && mid - 1 >= start)
        {
            return mid - 1;
        }

        if (nums[start] > nums[mid]) // means we're on line B
        {
            // so move left
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> nums{2, 4, 6, 8, 10};
    int ans = pivotElement(nums);
    cout << "Pivot element is:" << nums[ans];
    return 0;
}
