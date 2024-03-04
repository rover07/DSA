#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {-1, 2, -3, -3, -1};
    int sizeArr = 4;
    int brr[] = {4, 5, 2, -3, -3, 6};
    int sizeBrr = 6;
    vector<int> ans;
    for (int i = 0; i < sizeArr; i++)
    {
        for (int j = 0; j < sizeBrr; j++)
        {
            if (arr[i] == brr[j])
            {
                // brr[j] = -1;
                // brr[j] = INT_MIN; in case of mixed array of +ve and -ve numbers
                ans.push_back(arr[i]);
                break; // we can use break too 
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}