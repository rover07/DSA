#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3};
    int sizeArr = 3;
    int brr[] = {3, 4, 5, 6};
    int sizeBrr = 3;
    vector<int> ans;
    // for (int i = 0; i < sizeArr; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    // for (int i = 0; i < sizeBrr; i++)
    // {
    //     ans.push_back(brr[i]);
    // }
    for (int i = 0; i < sizeArr; i++)
    {
        for (int j = 0; j < sizeBrr; j++)
        {
            while (arr[i] != brr[j])
            {
                ans.push_back(arr[i]);
                ans.push_back(brr[j]);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << "hi";
    return 0;
}