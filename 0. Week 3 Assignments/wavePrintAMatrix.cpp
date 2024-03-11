#include <iostream>
#include <vector>
using namespace std;
void wavePrint(vector<vector<int>> nums)
{
    int rowSize = nums.size();
    int colSize = nums[0].size();
    // i here stands for columns. I emphasize that here and here only, i may vary on the bas of how i initialize it
    for (int i = 0; i < colSize; i++)
    {
        if ((i & 1) == 0)
        // if (i % 2 == 0) //works too
        {
            for (int j = 0; j < rowSize; j++)
            { // Top to bottom
                cout << nums[j][i] << " ";
            }
        }
        else
            // for odd no of columns
            //  go bottom to Top
            for (int j = rowSize - 1; j >= 0; j--)
            {
                {
                    cout << nums[j][i] << " ";
                }
            }
    }
}
int main()
{
    vector<vector<int>> nums{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    wavePrint(nums);
    return 0;
}