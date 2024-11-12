#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 6, 8, 10};
    int sizeArr = 6;
    int brr[] = {3, 4, 5, 6};
    int sizeBrr = 4;
    vector<int> ans;
    for (int i = 0; i < sizeArr; i++)
    {
        for (int j = 0; j < sizeBrr; j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = INT_MIN;

                ans.push_back(arr[i]);
                arr[i] = INT_MIN;
            }
        }
    }
    for (int i = 0; i < sizeArr; i++)
    {
        if (arr[i] != INT_MIN)
        {
            ans.push_back(arr[i]);
        }
    }
    for (int i = 0; i < sizeBrr; i++)
    {
        if (brr[i] != INT_MIN)
        {
            ans.push_back(brr[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}