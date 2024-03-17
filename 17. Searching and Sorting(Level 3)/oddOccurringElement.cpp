#include <iostream>
#include <vector>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{

    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // for single element
        if (start == end)
        {
            return nums[start]; // this is key stuff that returned our answer
        }

        else if (mid % 2 == 0) // Case 1: Even mid
        {
            // we're on left side of answer
            if (nums[mid] == nums[mid + 1])
            {
                start = mid + 2; // 2 as mid+1 is checked
            }
            else
            {
                end = mid; // storing this as this could be answer
            }
        }
        else // Case 2: Odd mid
        {
            if (nums[mid] == nums[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1; // here end cannot be ans as our answer is always even in this question.
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1; // valid testcase mein ye kabhi run he nahi hoga.
}

int main()
{
    vector<int> nums;
    singleNonDuplicate(nums);
    return 0;
}